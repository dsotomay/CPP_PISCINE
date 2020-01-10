#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("default", _sign, _execute){}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form( target, _sign, _execute) {
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) :
Form(src.getName(), _sign, _execute){
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void){}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs){
	static_cast<void>(rhs);
	return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
	if (executor.getGrade() > this->getGradeToExecute())
		throw ShrubberyCreationForm::GradeTooLowException();
	else if (!(this->getSigned()))
		return;
	std::string name = this->getName() + "_shrubbery";
	std::ofstream output(name);
	output << "      *      " << std::endl;
	output << "     ***     " << std::endl;
	output << "    *****    " << std::endl;
	output << "   *******   " << std::endl;
	output << "  *********  " << std::endl;
	output << "     ***     " << std::endl;
	output << "    *****    " << std::endl;
	output << "   *******   " << std::endl;
	output << "  *********  " << std::endl;
	output << " *********** " << std::endl;
	output << "     ***     " << std::endl;
	output << "     ***     " << std::endl;
	output << "     ***     " << std::endl;
	output.close();
}
