#include "Peon.hpp"

Peon::Peon(void){
	return;
};

Peon::Peon(std::string name) : Victim(name) {
	std::cout << "Zog zog." << std::endl;
};

Peon::Peon(Peon const & src){
	*this = src;
};

Peon::~Peon(void){
	std::cout << "Bleuark..." << std::endl;
};

Peon & Peon::operator=(Peon const & rhs){
	set_name(rhs.get_name());
	return *this;
};

void	Peon::getPolymorphed(void) const{
	std::cout << get_name() << " has been turned into a pink pony !" << std::endl;
};

std::ostream & operator<<( std::ostream & o, Peon const & rhs){
	o << "I'm " << rhs.get_name() << " and I like otters !" << std::endl;
	return o;
};
