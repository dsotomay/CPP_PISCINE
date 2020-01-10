#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

#define CATCH catch (std::exception & e) 

int main(){
	// try{
	// 	Bureaucrat Bob("Bob", 151); 
	// }
	// CATCH{
	// 	std::cout << e.what() << std::endl;
	// }
	try{
		ShrubberyCreationForm noob("noob");
		RobotomyRequestForm noob1("noob1");
		PresidentialPardonForm noob2("noob2");
		Bureaucrat George("George", 145);
		Bureaucrat fred("fred", 1);
		// std::cout << noob << noob1;
		std::cout << noob.getSigned() << std::endl;
		George.signForm(noob);
		// noob.execute(George);
		Bureaucrat glen("glen", 72);
		noob.execute(glen);
		// std::cout << noob.getSigned() << std::endl;
		// std::cout << noob;
		// George.incrementGrade();
		// fred.decrementGrade();
		std::cout << noob1.getSigned() << std::endl;
		glen.signForm(noob1);
		noob1.execute(fred);
		std::cout << noob1.getSigned() << std::endl;
		fred.signForm(noob2);
		noob2.execute(fred);
		// std::cout << noob1;
		// glen.incrementGrade();
		// std::cout << "this is not reached" <<  std::endl;
		// Bureaucrat noob2("noob2", 0);
	}
	CATCH{
		std::cout << e.what() << std::endl;
	}
	// Bureaucrat outside("new", 50);
	// Bureaucrat noob("noob", 0);
	// std::cout << outside;
}
