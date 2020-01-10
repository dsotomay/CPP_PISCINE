#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>

class ScavTrap
{
private:
	ScavTrap(void);
	int _Hit_points;
	static int const _Max_hit_points = 100;
	int _Energy_points;
	static int const _Max_energy_points = 100;
	int _level;
	std::string _name;
	int _Melee_attack_damage;
	int _Ranged_attack_damage;
	int _Armor_damage_reduction;

public:
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & src);
	~ScavTrap(void);

	ScavTrap &	operator=( ScavTrap const & rhs );

	int		getHP(void) const;
	int		getEP(void) const;
	int		getLVL(void) const;
	int		getMAD(void) const;
	int		getRAD(void) const;
	int		getArmor(void) const;
	std::string getname(void) const;
	void	setHP( int const Hit_points);
	void	setEP( int const energy_points);
	void	setLVL( int const level);
	void	setMAD( int const damage);
	void	setRAD( int const damage);
	void	setArmor( int const armor_points);
	void	setname(std::string const name);
	int		rangedAttack(std::string const & target);
	int		meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	challengeNewcomer(std::string const & target);
};

#endif