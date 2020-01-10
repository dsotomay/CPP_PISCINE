#include "Human.hpp"

Human::Human(){
	return;
}

Human::~Human(){
	return;
}

std::string Human::identify() const{
	return (_brain.identify());
}

const Brain& Human::getBrain() const{
	return (_brain);
}
