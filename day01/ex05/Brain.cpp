#include "Brain.hpp"

Brain::Brain(){
	return;
}

Brain::~Brain(){
	return;
}

std::string Brain::identify(void) const{
	std::ostringstream buf;
	buf << this;
	return (buf.str());
}
