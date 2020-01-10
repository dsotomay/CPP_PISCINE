#include "ZombieEvent.hpp"

int	main(){
	ZombieEvent zevent;
	Zombie zombie;
	zombie.set_name("george");
	zombie.set_type("stinky");
	zombie.announce();

	zevent.set_type("runner");
	Zombie *zombie1 = zevent.newZombie("blarg");
	zombie1->announce();

	zevent.randomChump();
	delete zombie1;
}