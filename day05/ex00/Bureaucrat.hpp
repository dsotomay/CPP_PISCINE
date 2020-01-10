#ifndef BUREACRAT_HPP
#define BUREACRAT_HPP
#include <iostream>

class Bureaucrat
{
	private:
		std::string const _name;
		int _grade;
		Bureaucrat(void);
	public:
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat(void);

		Bureaucrat & operator=(Bureaucrat const & rhs);

		std::string	getName(void) const;
		int	getGrade(void) const;
		void incrementGrade(void);
		void decrementGrade(void);

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

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif