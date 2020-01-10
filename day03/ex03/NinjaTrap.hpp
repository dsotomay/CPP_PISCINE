#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
	private:
		NinjaTrap(void);
	public:
		NinjaTrap(std::string name);
		NinjaTrap(NinjaTrap const & src);
		~NinjaTrap(void);

		NinjaTrap &	operator=( NinjaTrap const & rhs );

		void	Shoebox(NinjaTrap const & src);
		void	Shoebox(ClapTrap const & src);
		void	Shoebox(ScavTrap const & src);
		void	Shoebox(FragTrap const & src);
};

#endif