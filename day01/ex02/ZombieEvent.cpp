#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(){
	return;
}

ZombieEvent::~ZombieEvent(){
	return;
}

void	ZombieEvent::set_type(std::string const type){
	ZombieEvent::_type = type;
}

std::string	ZombieEvent::get_type(void){
	return (this->_type);
}

Zombie	*ZombieEvent::newZombie(std::string const name){
	Zombie *zombie = new Zombie;
	zombie->set_name(name);
	zombie->set_type(ZombieEvent::get_type());
	return (zombie);
}

void ZombieEvent::randomChump(void){
	Zombie zombie;
	std::string name;
	for (int i = 0; i < 6; i++)
		name += static_cast<char>(arc4random_uniform(95) + 32);
	zombie.set_name(name);
	zombie.set_type(ZombieEvent::get_type());
	zombie.announce();
}
