#ifndef SORCERER_HPP
#define SORCERER_HPP
#include <iostream>
#include "Victim.hpp"


class Sorcerer
{
	private:
		Sorcerer(void);
		std::string _name;
		std::string _title;
	public:
		Sorcerer(std::string name, std::string title);
		Sorcerer(Sorcerer const & src);
		~Sorcerer(void);

		Sorcerer & operator=(Sorcerer const & rhs);

		void polymorph(Victim const & noob) const;
		std::string	get_name(void) const;
		std::string	get_title(void) const;
		void	set_name(std::string name);
		void	set_title(std::string title);
};

std::ostream & operator<<( std::ostream & o, Sorcerer const & rhs);

#endif