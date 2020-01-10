#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>

class FragTrap
{
private:
	FragTrap(void);
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
	FragTrap(std::string name);
	FragTrap(FragTrap const & src);
	~FragTrap(void);

	FragTrap &	operator=( FragTrap const & rhs );

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
	int		vaulthunter_dot_exe(std::string const & target);
};

#endif