#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(){
	return;
}
ZombieHorde::ZombieHorde(int N){
	_Horde = new Zombie [N];
	for (int j = 0; j < N; j++)
	{
		std::string name;
		for (int i = 0; i < 6; i++)
			name += static_cast<char>(arc4random_uniform(95) + 32);
		_Horde[j].set_name(name);
		_Horde[j].set_type(ZombieHorde::get_type());
		_Horde[j].announce();
	}
	return;
}

ZombieHorde::~ZombieHorde(){
	delete[] _Horde;
	std::cout << "the horde is dead" << std::endl;
	return;
}

void	ZombieHorde::set_type(std::string const type){
	ZombieHorde::_type = type;
}

std::string	ZombieHorde::get_type(void){
	return (this->_type);
}

Zombie	*ZombieHorde::newZombie(std::string const name){
	Zombie *zombie = new Zombie;
	zombie->set_name(name);
	zombie->set_type(ZombieHorde::get_type());
	return (zombie);
}
