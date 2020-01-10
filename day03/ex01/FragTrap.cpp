#include "FragTrap.hpp"

FragTrap::FragTrap(){}

FragTrap::FragTrap(std::string name) : _Hit_points(100), _Energy_points(100), _level(1), _name(name), _Melee_attack_damage(30), _Ranged_attack_damage(20), _Armor_damage_reduction(5) {
	std::cout << "Booting sequence complete. Hello! I am your new steward bot. Designation: " << this->getname() << ", Hyperion Robot, Class C. Please adjust factory settings to meet your needs before deployment." << std::endl;
	return;
}

FragTrap::FragTrap(FragTrap const & src){
	*this = src;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs ){
	setHP(rhs.getHP());
	this->setEP(rhs.getEP());
	this->setLVL(rhs.getLVL());
	this->setMAD(rhs.getMAD());
	this->setRAD(rhs.getRAD());
	this->setArmor(rhs.getArmor());
	this->setname(rhs.getname());
	return *this;
}

FragTrap::~FragTrap(void){
	std::cout << this->getname() << " -- Are you god? Am I dead?" << std::endl;
	return;
}

int		FragTrap::getHP(void) const{
	return this->_Hit_points;
}

int		FragTrap::getEP(void) const{
	return this->_Energy_points;
}

int		FragTrap::getLVL(void) const{
	return this->_level;
}

int		FragTrap::getMAD(void) const{
	return this->_Melee_attack_damage;
}

int		FragTrap::getRAD(void) const{
	return this->_Ranged_attack_damage;
}

int		FragTrap::getArmor(void) const{
	return this->_Armor_damage_reduction;
}

std::string FragTrap::getname(void) const{
	return this->_name;
}

void	FragTrap::setHP( int const Hit_points){
	if (Hit_points >= this->_Max_hit_points)
		this->_Hit_points = this->_Max_hit_points;
	else if (Hit_points <= 0)
		this->_Hit_points = 0;
	else
		this->_Hit_points = Hit_points;
}

void	FragTrap::setEP( int const energy_points){
	if (energy_points >= this->_Max_energy_points)
		this->_Energy_points = this->_Max_energy_points;
	else if (energy_points <= 0)
		this->_Energy_points = 0;
	else
		this->_Energy_points = energy_points;
}

void	FragTrap::setLVL( int const level){
	this->_level = level;
}

void	FragTrap::setMAD( int const damage){
	this->_Melee_attack_damage = damage;
}

void	FragTrap::setRAD( int const damage){
	this->_Ranged_attack_damage = damage;
}

void	FragTrap::setArmor( int const armor_points){
	this->_Armor_damage_reduction = armor_points;
}

void	FragTrap::setname(std::string const name){
	this->_name = name;
}

int		FragTrap::rangedAttack(std::string const & target){
	std::cout << "FR4G-TP " << this->getname() << " has launched a ranged attack at " << target << ", for " << this->getRAD() << " points of damage!!!" << std::endl;	
	return this->getRAD();
}

int		FragTrap::meleeAttack(std::string const & target){
	std::cout << "FR4G-TP " << this->getname() << " has hit " << target << ", for " << this->getMAD() << " points of damage!!!" << std::endl;	
	return this->getMAD();
}

void	FragTrap::takeDamage(unsigned int amount){
	if (amount >= 5)
		amount -= this->getArmor();
	else
		amount = 0;
	std::cout << "FR4G-TP " << this->getname() << " has suffored " << amount << " points of damage!!!" << std::endl;
	this->setHP(amount);

}

void	FragTrap::beRepaired(unsigned int amount){
	std::cout << "FR4G-TP " << this->getname() << " has been repaired by " << amount << " points!!!" << std::endl;
	amount += this->getHP();
	this->setHP(amount);
}

int		FragTrap::vaulthunter_dot_exe(std::string const & target){
	if (this->getEP() > 0){
		int const energy_cost = 25;
		int attack_type = arc4random() % 2;
		static std::string const sissy_attacks[5] = { "sissy slaps", "frightened fart", "weeping wail", "leaking oil??", "freedom punch!!!"};
		if (attack_type){
			this->setEP(this->getEP() - energy_cost);
			std::cout << "FR4G-TP " << this->getname() << " has used " << sissy_attacks[arc4random() % 5] << std::endl;
			return this->meleeAttack(target);
		}
		else{
			this->setEP(this->getEP() - energy_cost);
			std::cout << "FR4G-TP " << this->getname() << " has used " << sissy_attacks[arc4random() % 5] << std::endl;
			return this->rangedAttack(target);
		}
	}
	else
		std::cout << "Warning Warning Warning !!! not enough energy Warning!" << std::endl;
	return 0;
}
