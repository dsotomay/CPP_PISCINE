#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void){
	return;
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name){
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : _name(src.getName()){
	if (src.getGrade() > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (src.getGrade() < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade = src.getGrade();
}

Bureaucrat::~Bureaucrat(void){
	std::cout << *this << std::endl;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs){
	_grade = rhs.getGrade();
	return *this;
}

std::string Bureaucrat::getName(void) const{
	return _name;
}

int	Bureaucrat::getGrade(void) const{
	return _grade;
}

void Bureaucrat::incrementGrade(void){
	if (_grade == 1)
		throw GradeTooHighException();
	_grade--;
}

void Bureaucrat::decrementGrade(void){
	if (_grade == 150)
		throw GradeTooLowException();
	_grade++;
}

void Bureaucrat::signForm(Form & src){
	try{
		src.beSigned(*this);
		std::cout << _name << " signs " << src.getName() << std::endl;
	}
	catch (std::exception & e){
		std::cout << _name << " could not sign form " << src.getName() << " because " <<
		e.what() << std::endl;
	}		
}

char const *Bureaucrat::GradeTooHighException::what()const throw(){
	return ("Grade too high");
}

char const *Bureaucrat::GradeTooLowException::what()const throw(){
	return ("Grade too low");
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs){
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return o;
}
