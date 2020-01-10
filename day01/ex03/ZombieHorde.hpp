#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
# include "Zombie.hpp"

class ZombieHorde{
	private:
		std::string _type;
		Zombie *_Horde;
	public:
		ZombieHorde();
		ZombieHorde(int N);
		~ZombieHorde();
		void set_type(std::string const type);
		std::string get_type(void);
		Zombie *newZombie(std::string const name);
};

#endif