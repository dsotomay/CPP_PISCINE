#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){}

ScavTrap::ScavTrap(std::string name) : _Hit_points(100), _Energy_points(50), _level(1), _name(name), _Melee_attack_damage(20), _Ranged_attack_damage(15), _Armor_damage_reduction(3) {
	std::cout << "Yes. Remember what? Are... are you my father?" << std::endl;
	return;
}

ScavTrap::ScavTrap(ScavTrap const & src){
	*this = src;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs ){
	setHP(rhs.getHP());
	this->setEP(rhs.getEP());
	this->setLVL(rhs.getLVL());
	this->setMAD(rhs.getMAD());
	this->setRAD(rhs.getRAD());
	this->setArmor(rhs.getArmor());
	this->setname(rhs.getname());
	return *this;
}

ScavTrap::~ScavTrap(void){
	std::cout << this->getname() << " O-KAY! Thanks for giving me a second chance, God. I really appreciate it." << std::endl;
	return;
}

int		ScavTrap::getHP(void) const{
	return this->_Hit_points;
}

int		ScavTrap::getEP(void) const{
	return this->_Energy_points;
}

int		ScavTrap::getLVL(void) const{
	return this->_level;
}

int		ScavTrap::getMAD(void) const{
	return this->_Melee_attack_damage;
}

int		ScavTrap::getRAD(void) const{
	return this->_Ranged_attack_damage;
}

int		ScavTrap::getArmor(void) const{
	return this->_Armor_damage_reduction;
}

std::string ScavTrap::getname(void) const{
	return this->_name;
}

void	ScavTrap::setHP( int const Hit_points){
	if (Hit_points >= this->_Max_hit_points)
		this->_Hit_points = this->_Max_hit_points;
	else if (Hit_points <= 0)
		this->_Hit_points = 0;
	else
		this->_Hit_points = Hit_points;
}

void	ScavTrap::setEP( int const energy_points){
	if (energy_points >= this->_Max_energy_points)
		this->_Energy_points = this->_Max_energy_points;
	else if (energy_points <= 0)
		this->_Energy_points = 0;
	else
		this->_Energy_points = energy_points;
}

void	ScavTrap::setLVL( int const level){
	this->_level = level;
}

void	ScavTrap::setMAD( int const damage){
	this->_Melee_attack_damage = damage;
}

void	ScavTrap::setRAD( int const damage){
	this->_Ranged_attack_damage = damage;
}

void	ScavTrap::setArmor( int const armor_points){
	this->_Armor_damage_reduction = armor_points;
}

void	ScavTrap::setname(std::string const name){
	this->_name = name;
}

int		ScavTrap::rangedAttack(std::string const & target){
	std::cout << "Scav-TP " << this->getname() << " has launched a ranged attack at " << target << ", for " << this->getRAD() << " points of damage!!!" << std::endl;	
	return this->getRAD();
}

int		ScavTrap::meleeAttack(std::string const & target){
	std::cout << "Scav-TP " << this->getname() << " has hit " << target << ", for " << this->getMAD() << " points of damage!!!" << std::endl;	
	return this->getMAD();
}

void	ScavTrap::takeDamage(unsigned int amount){
	if (amount >= 5)
		amount -= this->getArmor();
	else
		amount = 0;
	std::cout << "Scav-TP " << this->getname() << " has suffored " << amount << " points of damage!!!" << std::endl;
	this->setHP(amount);

}

void	ScavTrap::beRepaired(unsigned int amount){
	std::cout << "Scav-TP " << this->getname() << " has been repaired by " << amount << " points!!!" << std::endl;
	amount += this->getHP();
	this->setHP(amount);
}

void	challengeNewcomer(std::string const & target){
		static std::string const challenges[5] = { "dance off!!!", "child rearing contest.", "how human am I contest.", "5th dimensional wave surfing contest.", "food eating contest."};
		std::cout << "Scav-TP " << this->getname() << " has challenged the newcomer " << target << " to a " << challenges[arc4random() % 5] << std::endl;
}
