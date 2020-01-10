#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
protected:
	ClapTrap(void);
	int _Hit_points;
	int _Max_hit_points;
	int _Energy_points;
	int _Max_energy_points;
	int _level;
	std::string _name;
	int _Melee_attack_damage;
	int _Ranged_attack_damage;
	int _Armor_damage_reduction;

public:
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const & src);
	~ClapTrap(void);

	ClapTrap &	operator=( ClapTrap const & rhs );

	int		getHP(void) const;
	int		getMHP(void) const;
	int		getEP(void) const;
	int		getMEP(void) const;
	int		getLVL(void) const;
	int		getMAD(void) const;
	int		getRAD(void) const;
	int		getArmor(void) const;
	std::string getname(void) const;
	void	setHP( int const Hit_points);
	void	setMHP( int const Hit_points);
	void	setEP( int const energy_points);
	void	setMEP( int const energy_points);
	void	setLVL( int const level);
	void	setMAD( int const damage);
	void	setRAD( int const damage);
	void	setArmor( int const armor_points);
	void	setname(std::string const name);
	int		rangedAttack(std::string const & target);
	int		meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif