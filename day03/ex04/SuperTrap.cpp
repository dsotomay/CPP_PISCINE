#include "SuperTrap.hpp"

SuperTrap::SuperTrap(){}

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), FragTrap(name), NinjaTrap(name){
	setMHP(100);
	setHP(100);
	setMEP(120);
	setEP(120);
	setLVL(1);
	setMAD(60);
	setRAD(20);
	setArmor(5);
	std::cout << "MY EYES, MY EYES, gaahhhhhhhhhh Why is it so bright." << std::endl;
	return;
}

SuperTrap::SuperTrap(SuperTrap const & src) : ClapTrap(src), FragTrap(src), NinjaTrap(src) {
	*this = src;
}

SuperTrap & SuperTrap::operator=(SuperTrap const & rhs ){
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

SuperTrap::~SuperTrap(void){
	std::cout << getname() << " Howwww??? Whyyyyy??? Wait... What happened again??" << std::endl;
	return;
}

// void	SuperTrap::Shoebox(ClapTrap const & src){
// 		std::cout << "Super-TP " << getname() << " has bowed to the almighty Clap-TP " << src.getname() << ". They have accpeted the offering." << std::endl;
// }

// void	SuperTrap::Shoebox(FragTrap const & src){
// 		std::cout << "Super-TP " << getname() << " has used hide-from Frag-TP " << src.getname() << ". It is not very effective." << std::endl;
// }

// void	SuperTrap::Shoebox(ScavTrap const & src){
// 		std::cout << "Super-TP " << getname() << " has convinced Scav-TP " << src.getname() << " that any sort of competition is not only a great idea but fun as well." << std::endl;
// }

// void	SuperTrap::Shoebox(NinjaTrap const & src){
// 		std::cout << "Super-TP " << getname() << " has initiated spy vs spy mode with Ninja-TP " << src.getname() << ". However due to the size of the Super-TP they always seem to get found first..." << std::endl;
// }

// void	SuperTrap::Shoebox(SuperTrap const & src){
// 		std::cout << "Super-TP " << getname() << " has initiated a chest bump with Super-TP " << src.getname() << ". However realizing they are robots and for some reason don't have anything resembling a chest they give up and head nod... or something." << std::endl;
// }

// int		SuperTrap::vaulthunter_dot_exe(std::string const & target){
// 	if (getEP() > 0){
// 		int const energy_cost = 25;
// 		int attack_type = arc4random() % 2;
// 		static std::string const sissy_attacks[5] = { "Super sissy slaps", "Super frightened fart", "Super weeping wail", "Super leaking oil??", "Super freedom punch!!!"};
// 		if (attack_type){
// 			setEP(getEP() - energy_cost);
// 			std::cout << "Super-TP " << getname() << " has used " << sissy_attacks[arc4random() % 5] << std::endl;
// 			return meleeAttack(target);
// 		}
// 		else{
// 			setEP(getEP() - energy_cost);
// 			std::cout << "Super-TP " << getname() << " has used " << sissy_attacks[arc4random() % 5] << std::endl;
// 			return rangedAttack(target);
// 		}
// 	}
// 	else
// 		std::cout << "Warning Warning Warning !!! not enough energy Warning!" << std::endl;
// 	return 0;
// }
