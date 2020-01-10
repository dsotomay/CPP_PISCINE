#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("default", _sign, _execute){}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form( target, _sign, _execute) {
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) :
Form(src.getName(), _sign, _execute){
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm(void){}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs){
	static_cast<void>(rhs);
	return *this;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const{
	if (executor.getGrade() > this->getGradeToExecute())
		throw PresidentialPardonForm::GradeTooLowException();
	else if (!(this->getSigned()))
		return;
	
	std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}