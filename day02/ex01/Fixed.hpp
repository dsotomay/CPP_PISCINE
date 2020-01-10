#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class	Fixed{
	private:
		int	_fixed_num;
		static const int _precision = 8;
	public:
		Fixed(void);
		Fixed(Fixed const & src);
		Fixed(int const num);
		Fixed(float const num);
		~Fixed(void);

		Fixed &	operator=( Fixed const & rhs );
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat(void) const;
		int toInt(void) const;

};

std::ostream & operator<<( std::ostream & o, Fixed const & rhs);

#endif
