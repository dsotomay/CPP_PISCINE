#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){}

ClapTrap::ClapTrap(std::string name) : _name(name) {
	std::cout << "Booting sequence complete. Hello! I am your new steward bot. Designation: " << this->getname() << ", Hyperion Robot, Class C. Please adjust factory settings to meet your needs before deployment." << std::endl;
	return;
}

ClapTrap::ClapTrap(ClapTrap const & src) {
	*this = src;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs ){
	setMHP(rhs.getMHP());
	setHP(rhs.getHP());
	setMEP(rhs.getMEP());
	setEP(rhs.getEP());
	setLVL(rhs.getLVL());
	setMAD(rhs.getMAD());
	setRAD(rhs.getRAD());
	setArmor(rhs.getArmor());
	setname(rhs.getname());
	return *this;
}

ClapTrap::~ClapTrap(void){
	std::cout << getname() << " I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
	return;
}

int		ClapTrap::getHP(void) const{
	return _Hit_points;
}

int		ClapTrap::getMHP(void) const{
	return _Max_hit_points;
}

int		ClapTrap::getEP(void) const{
	return _Energy_points;
}

int		ClapTrap::getMEP(void) const{
	return _Max_energy_points;
}

int		ClapTrap::getLVL(void) const{
	return _level;
}

int		ClapTrap::getMAD(void) const{
	return _Melee_attack_damage;
}

int		ClapTrap::getRAD(void) const{
	return _Ranged_attack_damage;
}

int		ClapTrap::getArmor(void) const{
	return _Armor_damage_reduction;
}

std::string ClapTrap::getname(void) const{
	return _name;
}

void	ClapTrap::setHP( int const Hit_points){
	if (Hit_points >= _Max_hit_points)
		_Hit_points = _Max_hit_points;
	else if (Hit_points <= 0)
		_Hit_points = 0;
	else
		_Hit_points = Hit_points;
}

void	ClapTrap::setMHP( int const Hit_points){
	if (Hit_points <= 0)
		_Hit_points = 0;
	else
		_Max_hit_points = Hit_points;
}

void	ClapTrap::setEP( int const energy_points){
	if (energy_points >= _Max_energy_points)
		_Energy_points = _Max_energy_points;
	else if (energy_points <= 0)
		_Energy_points = 0;
	else
		_Energy_points = energy_points;
}

void	ClapTrap::setMEP( int const energy_points){
	if (energy_points <= 0)
		_Energy_points = 0;
	else
		_Max_energy_points = energy_points;
}

void	ClapTrap::setLVL( int const level){
	_level = level;
}

void	ClapTrap::setMAD( int const damage){
	_Melee_attack_damage = damage;
}

void	ClapTrap::setRAD( int const damage){
	_Ranged_attack_damage = damage;
}

void	ClapTrap::setArmor( int const armor_points){
	_Armor_damage_reduction = armor_points;
}

void	ClapTrap::setname(std::string const name){
	_name = name;
}

int		ClapTrap::rangedAttack(std::string const & target){
	std::cout << "Clap-TP " << getname() << " has launched a ranged attack at " << target << ", for " << getRAD() << " points of damage!!!" << std::endl;	
	return getRAD();
}

int		ClapTrap::meleeAttack(std::string const & target){
	std::cout << "Clap-TP " << getname() << " has hit " << target << ", for " << this->getMAD() << " points of damage!!!" << std::endl;	
	return getMAD();
}

void	ClapTrap::takeDamage(unsigned int amount){
	if (amount >= 5)
		amount -= getArmor();
	else
		amount = 0;
	std::cout << "Clap-TP " << getname() << " has suffored " << amount << " points of damage!!!" << std::endl;
	setHP(amount);

}

void	ClapTrap::beRepaired(unsigned int amount){
	std::cout << "Clap-TP " << getname() << " has been repaired by " << amount << " points!!!" << std::endl;
	amount += getHP();
	setHP(amount);
}
