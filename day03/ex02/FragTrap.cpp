#include "FragTrap.hpp"

FragTrap::FragTrap(){}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	setMHP(100);
	setHP(100);
	setMEP(100);
	setEP(100);
	setLVL(1);
	setMAD(30);
	setRAD(20);
	setArmor(5);
	std::cout << "Hello i'm " << this->getname() << std::endl;
	return;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src) {
	*this = src;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs ){
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

FragTrap::~FragTrap(void){
	std::cout << getname() << " -- Are you god? Am I dead?" << std::endl;
	return;
}

int		FragTrap::vaulthunter_dot_exe(std::string const & target){
	if (getEP() > 0){
		int const energy_cost = 25;
		int attack_type = arc4random() % 2;
		static std::string const sissy_attacks[5] = { "sissy slaps", "frightened fart", "weeping wail", "leaking oil??", "freedom punch!!!"};
		if (attack_type){
			setEP(getEP() - energy_cost);
			std::cout << "FR4G-TP " << getname() << " has used " << sissy_attacks[arc4random() % 5] << std::endl;
			return meleeAttack(target);
		}
		else{
			setEP(getEP() - energy_cost);
			std::cout << "FR4G-TP " << getname() << " has used " << sissy_attacks[arc4random() % 5] << std::endl;
			return rangedAttack(target);
		}
	}
	else
		std::cout << "Warning Warning Warning !!! not enough energy Warning!" << std::endl;
	return 0;
}
