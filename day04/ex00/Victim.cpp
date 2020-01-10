#include "Victim.hpp"

Victim::Victim(void){
	return;
}

Victim::Victim(std::string name) : _name(name){
	std::cout << "Some random victim called " << get_name() << " just popped !" << std::endl;
};

Victim::Victim(Victim const & src){
	*this = src;
};

Victim::~Victim(void){
	std::cout << "Victim " << get_name() << " just died for no apparent reason !" << std::endl;
};

Victim & Victim::operator=(Victim const & rhs){
	set_name(rhs.get_name());
	return *this;
};

void	Victim::getPolymorphed(void) const{
	std::cout << get_name() << " has been turned into a cute little sheep !" << std::endl;
};

std::string	Victim::get_name(void) const{
	return _name;
};

void	Victim::set_name(std::string name){
	_name = name;
};

std::ostream & operator<<( std::ostream & o, Victim const & rhs){
	o << "I'm " << rhs.get_name() << " and I like otters !" << std::endl;
	return o;
};
