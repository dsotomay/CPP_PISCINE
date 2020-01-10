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
		Fixed 	operator+( Fixed const & rhs ) const;
		Fixed 	operator-( Fixed const & rhs ) const;
		Fixed 	operator*( Fixed const & rhs ) const;
		Fixed 	operator/( Fixed const & rhs ) const;
		Fixed & operator++( void );
		Fixed operator++( int );
		Fixed &	operator--( void );
		Fixed operator--( int );
		bool operator>( Fixed const & rhs );
		bool operator<( Fixed const & rhs );
		bool operator>=( Fixed const & rhs );
		bool operator<=( Fixed const & rhs );
		bool operator==( Fixed const & rhs );
		bool operator!=( Fixed const & rhs );

		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat(void) const;
		int toInt(void) const;
		static Fixed & min(Fixed & a, Fixed & b);
		static Fixed const & min(Fixed const & a, Fixed const & b);
		static Fixed & max(Fixed & a, Fixed & b);
		static Fixed const & max(Fixed const & a, Fixed const & b);

};

std::ostream & operator<<( std::ostream & o, Fixed const & rhs);


#endif
