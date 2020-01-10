#ifndef Peon_HPP
#define Peon_HPP
#include <iostream>
#include "Victim.hpp"


class Peon : public Victim
{
	protected:
		Peon(void);
	public:
		Peon(std::string name);
		Peon(Peon const & src);
		~Peon(void);

		Peon & operator=(Peon const & rhs);

		void getPolymorphed(void) const;
};

std::ostream & operator<<( std::ostream & o, Peon const & rhs);

#endif