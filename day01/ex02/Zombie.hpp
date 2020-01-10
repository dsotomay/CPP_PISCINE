#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class	Zombie{
	private:
		std::string	_type;
		std::string _name;
	public:
		Zombie();
		~Zombie();
		void set_type(std::string const type);
		void set_name(std::string const name);
		std::string get_type(void);
		std::string get_name(void);
		void announce(void);
};

#endif