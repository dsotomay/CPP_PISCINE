#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title){
	std::cout << get_name() << ", " << get_title() << ", is born !" << std::endl;
};

Sorcerer::Sorcerer(Sorcerer const & src){
	*this = src;
};

Sorcerer::~Sorcerer(void){
	std::cout << get_name() << ", " << get_title() << "is dead.  Consequences will never be the same !" << std::endl;
};

Sorcerer & Sorcerer::operator=(Sorcerer const & rhs){
	set_name(rhs.get_name());
	set_title(rhs.get_title());
	return *this;
};

void Sorcerer::polymorph(Victim const & noob) const{
	noob.getPolymorphed();
};

std::string	Sorcerer::get_name(void) const{
	return _name;
}

std::string	Sorcerer::get_title(void) const{
	return _title;
}

void	Sorcerer::set_name(std::string name){
	_name = name;
}

void	Sorcerer::set_title(std::string title){
	_title = title;
}

std::ostream & operator<<( std::ostream & o, Sorcerer const & rhs){
	o << "I am " << rhs.get_name() << ", " << rhs.get_title() << ", and I like ponies !" << std::endl;
	return o;
};
