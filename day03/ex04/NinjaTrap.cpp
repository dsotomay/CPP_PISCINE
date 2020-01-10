#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(){}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name){
	setMHP(60);
	setHP(60);
	setMEP(120);
	setEP(120);
	setLVL(1);
	setMAD(60);
	setRAD(5);
	setArmor(0);
	std::cout << "Who are you??? Actually, before that, Who am I??" << std::endl;
	return;
	
}

NinjaTrap::NinjaTrap(NinjaTrap const & src) : ClapTrap(src) {
	*this = src;
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap const & rhs ){
	setHP(rhs.getHP());
	setMHP(rhs.getMHP());
	setEP(rhs.getEP());
	setMEP(rhs.getMEP());
	setLVL(rhs.getLVL());
	setMAD(rhs.getMAD());
	setRAD(rhs.getRAD());
	setArmor(rhs.getArmor());
	setname(rhs.getname());
	return *this;
}

NinjaTrap::~NinjaTrap(void){
	std::cout << getname() << " Who was I? What was my purpose? Did I ever finish washing my socks?" << std::endl;
	return;
}

void	NinjaTrap::Shoebox(ClapTrap const & src){
		std::cout << "Ninja-TP " << getname() << " has bowed to the almighty Clap-TP " << src.getname() << ". They have accpeted the offering." << std::endl;
}

void	NinjaTrap::Shoebox(FragTrap const & src){
		std::cout << "Ninja-TP " << getname() << " has used hide-from Frag-TP " << src.getname() << ". It is very effective." << std::endl;
}

void	NinjaTrap::Shoebox(ScavTrap const & src){
		std::cout << "Ninja-TP " << getname() << " has convinced Scav-TP " << src.getname() << " that any sort of competition is not only usless but stupid as well." << std::endl;
}

void	NinjaTrap::Shoebox(NinjaTrap const & src){
		std::cout << "Ninja-TP " << getname() << " has initiated spy vs spy mode with Ninja-TP " << src.getname() << ". Somehow they both end up walking by each other without realizing and nothing paricularly interesting happens..." << std::endl;
}
