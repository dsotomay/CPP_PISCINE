#include "Pony.hpp"

Pony::Pony(void){
	std::cout << "A beautiful pony is born." << std::endl;
	return;
}

Pony::~Pony(void){
	std::cout << "The beautiful pony " << Pony::getname() << " has died. The world is weeping, the soft sound of rain is heard in the distance." << std::endl;
	return;
}

std::string	Pony::getname(void){
	return (this->_name);
};

std::string Pony::getgender(void){
	return (this->_gender);
};

std::string Pony::getcolor(void){
	return (this->_color);
};

void		Pony::setname(std::string const str){
	this->_name = str;
};

void		Pony::setgender(std::string const str){
	this->_gender = str;
};

void		Pony::setcolor(std::string const str){
	this->_color = str;
};
