#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("default", _sign, _execute){}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form( target, _sign, _execute) {
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) :
Form(src.getName(), _sign, _execute){
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm(void){}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs){
	static_cast<void>(rhs);
	return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const{
	if (executor.getGrade() > this->getGradeToExecute())
		throw RobotomyRequestForm::GradeTooLowException();
	else if (!(this->getSigned()))
		return;
	if (arc4random_uniform(2) == 1)
		std::cout << "bzzzzz bzzzzzz bzzzzzzz clank clank bzzzzz" << '\n' << this->getName() << " has been robotomized successfully!!!" << std::endl;
	else
		std::cout << "bzzzzz bzzzzzz bzzzzzzz clank clank bzzzzz" << '\n' << "Robotomy has failed. Please try again later!!!" << std::endl;
}
