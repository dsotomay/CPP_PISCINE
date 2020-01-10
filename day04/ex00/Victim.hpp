#ifndef Victim_HPP
#define Victim_HPP
#include <iostream>


class Victim
{
	private:
		std::string _name;
	protected:
		Victim(void);
	public:
		Victim(std::string name);
		Victim(Victim const & src);
		~Victim(void);

		Victim & operator=(Victim const & rhs);

		virtual void getPolymorphed(void) const;
		std::string	get_name(void) const;
		void	set_name(std::string name);
};

std::ostream & operator<<( std::ostream & o, Victim const & rhs);

#endif