#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap 
{
	private:
		SuperTrap(void);

	public:
		SuperTrap(std::string name);
		SuperTrap(SuperTrap const & src);
		~SuperTrap(void);

		SuperTrap &	operator=( SuperTrap const & rhs );

};

#endif