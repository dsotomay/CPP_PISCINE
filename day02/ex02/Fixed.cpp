#include "Fixed.hpp"

Fixed::Fixed(void) : _fixed_num(0) {
	return;
}

Fixed::Fixed(int const num) : _fixed_num(num * (1 << Fixed::_precision)){
	return;
}

Fixed::Fixed(float const num) : _fixed_num(roundf(num * (1 << Fixed::_precision))){
	return;
}

Fixed::~Fixed(){
	return;
}

Fixed::Fixed( Fixed const & src){
	*this = src;
}

Fixed & Fixed::operator=(Fixed const & rhs ){
	this->_fixed_num = rhs.getRawBits();
	return *this;
}

Fixed  Fixed::operator+(Fixed const & rhs ) const{
	Fixed num = *this;
	num._fixed_num += rhs.getRawBits();
	return num;
}

Fixed  Fixed::operator-(Fixed const & rhs ) const{
	Fixed num = *this;
	num._fixed_num -= rhs.getRawBits();
	return num;
}

Fixed  Fixed::operator*(Fixed const & rhs ) const{
	// Fixed new_num = *this;
	// new_num._fixed_num *= rhs.getRawBits();
	// new_num._fixed_num /= (1 << this->_precision);
	return this->toFloat() * rhs.toFloat();
}

Fixed  Fixed::operator/(Fixed const & rhs ) const{
	// Fixed new_num = *this;
	// new_num._fixed_num *= (1 << this->_precision);
	// new_num._fixed_num /= rhs.getRawBits();
	return this->toFloat() / rhs.toFloat();
}

bool Fixed::operator>(Fixed const & rhs ){
	if (this->_fixed_num > rhs.getRawBits())
		return true;
	else
		return false;
}

bool Fixed::operator<(Fixed const & rhs ){
	if (this->_fixed_num < rhs.getRawBits())
		return true;
	else
		return false;
}

bool Fixed::operator>=(Fixed const & rhs ){
	if (this->_fixed_num >= rhs.getRawBits())
		return true;
	else
		return false;
}

bool Fixed::operator<=(Fixed const & rhs ){
	if (this->_fixed_num <= rhs.getRawBits())
		return true;
	else
		return false;
}
bool Fixed::operator==(Fixed const & rhs ){
	if (this->_fixed_num == rhs.getRawBits())
		return true;
	else
		return false;
}
bool Fixed::operator!=(Fixed const & rhs ){
	if (this->_fixed_num != rhs.getRawBits())
		return true;
	else
		return false;
}

Fixed & Fixed::operator++(void){
	++this->_fixed_num;
	return *this;
}

Fixed Fixed::operator++(int){
	Fixed old(*this);
	this->_fixed_num++;
	return old;
}

Fixed & Fixed::operator--(void){
	this->_fixed_num--;
	return *this;
}

Fixed Fixed::operator--(int){
	Fixed old(*this);
	this->_fixed_num--;
	return old;
}

int		Fixed::getRawBits( void ) const{
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

Fixed & Fixed::min(Fixed & a, Fixed & b){
	if (a._fixed_num < b._fixed_num)
		return a;
	else
		return b;
}

Fixed const & Fixed::min(Fixed const & a, Fixed const & b){
	if (a._fixed_num < b._fixed_num)
		return a;
	else
		return b;
}

Fixed & Fixed::max(Fixed & a, Fixed & b){
	if (a._fixed_num > b._fixed_num)
		return a;
	else
		return b;
}

Fixed const & Fixed::max(Fixed const & a, Fixed const & b){
	if (a._fixed_num > b._fixed_num)
		return a;
	else
		return b;
}

std::ostream & operator<<( std::ostream & o, Fixed const & rhs){
	o << rhs.toFloat();
	return o;
}
