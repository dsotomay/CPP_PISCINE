#include "Bureaucrat.hpp"

#define CATCH catch (std::exception & e) 

int main(){
	try{
		Bureaucrat Bob("Bob", 151); 
	}
	CATCH{
		std::cout << e.what() << std::endl;
	}
	try{
		Form noob("noob", 1, 1);
		Form noob1("noob1", 1, 1);
		Bureaucrat George("George", 150);
		Bureaucrat fred("fred", 1);
		std::cout << noob << noob1;
		std::cout << noob.getSigned() << std::endl;
		fred.signForm(noob);
		std::cout << noob.getSigned() << std::endl;
		std::cout << noob;
		Bureaucrat glen(fred);
		George.incrementGrade();
		fred.decrementGrade();
		std::cout << noob1.getSigned() << std::endl;
		fred.signForm(noob1);
		std::cout << noob1.getSigned() << std::endl;
		std::cout << noob1;
		glen.incrementGrade();
		std::cout << "this is not reached" <<  std::endl;
		Bureaucrat noob2("noob2", 0);
	}
	CATCH{
		std::cout << e.what() << std::endl;
	}
	Bureaucrat outside("new", 50);
	// Bureaucrat noob("noob", 0);
	// std::cout << outside;
}
