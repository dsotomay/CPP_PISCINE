#include "Form.hpp"

Form::Form(void) : _grade_to_sign(0), _grade_to_execute(0){}

Form::Form(std::string const name, int const grade_to_sign, int const grade_to_execute) 
: _name(name), _grade_to_sign(grade_to_sign), _grade_to_execute(grade_to_execute) {
	if (_grade_to_sign > 150 || _grade_to_execute > 150)
		throw Form::GradeTooLowException();
	else if (_grade_to_execute < 1 || _grade_to_sign < 1)
		throw Form::GradeTooHighException();
	_signed = false;
}

Form::Form(Form const & src)
 : _name(src.getName()), _grade_to_sign(src.getGradeToSign()), _grade_to_execute(src.getGradeToExecute()){
	if (src.getGradeToExecute() > 150 || src.getGradeToSign() > 150)
		throw Form::GradeTooLowException();
	else if (src.getGradeToExecute() < 1 || src.getGradeToSign() < 1)
		throw Form::GradeTooHighException();
}

Form::~Form(void){
}

Form & Form::operator=(Form const & rhs){
	_signed = rhs._signed;
	return *this;
}

std::string Form::getName(void) const{
	return _name;
}

int	Form::getGradeToExecute(void) const{
	return _grade_to_execute;
}

int	Form::getGradeToSign(void) const{
	return _grade_to_sign;
}

bool Form::getSigned(void) const{
	return _signed;
}

void Form::beSigned(Bureaucrat & src){
	if (_grade_to_sign < src.getGrade())
		throw Form::GradeTooLowException();
	_signed = true;
}

char const *Form::GradeTooHighException::what()const throw(){
	return ("Grade too high");
}

char const *Form::GradeTooLowException::what()const throw(){
	return ("Grade too low");
}

std::ostream & operator<<(std::ostream & o, Form const & rhs){
	o << "Form " << rhs.getName() << " requires a grade of " << rhs.getGradeToSign() <<
	" to be signed and a grade of " << rhs.getGradeToExecute() << " to be executed." << std::endl;
	return o;
}
