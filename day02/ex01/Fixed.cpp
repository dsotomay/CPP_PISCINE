#include "Fixed.hpp"

Fixed::Fixed(void) : _fixed_num(0) {
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(int const num) : _fixed_num(num * (1 << Fixed::_precision)){
	std::cout << "Int constructor called " << std::endl;
	return;
}

Fixed::Fixed(float const num) : _fixed_num(roundf(num * (1 << Fixed::_precision))){
	std::cout << "Float constructor called " << std::endl;
	return;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed::Fixed( Fixed const & src){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed & Fixed::operator=(Fixed const & rhs ){
	std::cout << "Assignation operator called" << std::endl;
	this->_fixed_num = rhs.getRawBits();
	return *this;
}

int	Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixed_num;
}

void	Fixed::setRawBits( int const raw ){
	this->_fixed_num = raw;
}

float	Fixed::toFloat(void) const {
	float new_f = this->_fixed_num;
	return new_f / (1 << this->_precision);
}

int		Fixed::toInt(void) const {
	return this->_fixed_num / (1 << this->_precision);
}

std::ostream & operator<<( std::ostream & o, Fixed const & rhs){
	o << rhs.toFloat();
	return o;
}
