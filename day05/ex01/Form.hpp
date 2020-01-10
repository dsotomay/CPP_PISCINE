#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form 
{
	private:
		std::string const _name;
		int const _grade_to_sign;
		int const _grade_to_execute;
		bool _signed;
		Form(void);
	public:
		Form(std::string const name, int const grade_to_sign, int const grade_to_execute);
		Form(Form const & src);
		~Form(void);

		Form & operator=(Form const & rhs);

		std::string	getName(void) const;
		int	getGradeToSign(void) const;
		int	getGradeToExecute(void) const;
		bool getSigned(void);
		void beSigned(Bureaucrat & src);

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
};

std::ostream & operator<<(std::ostream & o, Form const & rhs);

#endif