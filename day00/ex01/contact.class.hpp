#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP
# include <iostream>
# include <iomanip>
# include <string>
# include <stdlib.h>

class	Contact{
	public:
		Contact( void );
		~Contact( void );
		void	Add( const std::string info[] );

		void	Search( int count_contact );

		int		check( void );

		void	Print( void );
	private:
		std::string _contact_info[11];
};

#endif
