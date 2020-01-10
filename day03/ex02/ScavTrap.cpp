#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	setMHP(100);
	setHP(100);
	setMEP(50);
	setEP(50);
	setLVL(1);
	setMAD(20);
	setRAD(15);
	setArmor(3);
	std::cout << "Yes. Remember what? Are... are you my father?" << std::endl;
	return;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src) {
	*this = src;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs ){
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

ScavTrap::~ScavTrap(void){
	std::cout << getname() << " O-KAY! Thanks for giving me a second chance, God. I really appreciate it." << std::endl;
	return;
}

void	ScavTrap::challengeNewcomer(std::string const & target){
		static std::string const challenges[5] = { "dance off!!!", "child rearing contest.", "how human am I contest.", "5th dimensional wave surfing contest.", "food eating contest."};
		std::cout << "Scav-TP " << getname() << " has challenged the newcomer " << target << " to a " << challenges[arc4random() % 5] << std::endl;
}
