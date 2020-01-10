#include "Zombie.hpp"

Zombie::Zombie(void){
	return;
}

Zombie::~Zombie(void){
	std::cout << this->get_name() << " has died!!!" << std::endl;
	return;
}

void Zombie::set_type(std::string const type){
	Zombie::_type = type;
}

void Zombie::set_name(std::string const name){
	Zombie::_name = name;
}

std::string Zombie::get_type(void){
	return (this->_type);
}

std::string Zombie::get_name(void){
	return (this->_name);
}

void Zombie::announce(void){
	std::cout << "<" << this->_name << " (" << this->_type << ")> moreeeeeee braiiiiinnnzzzzz......." << std::endl;
}
