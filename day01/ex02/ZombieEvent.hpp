#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
# include "Zombie.hpp"

class ZombieEvent{
	private:
		std::string _type;
	public:
		ZombieEvent();
		~ZombieEvent();
		void set_type(std::string const type);
		std::string get_type(void);
		Zombie *newZombie(std::string const name);
		void randomChump(void);
};

#endif