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
		Bureaucrat George("George", 150);
		Bureaucrat fred("fred", 1);
		Bureaucrat glen(fred);
		George.incrementGrade();
		fred.decrementGrade();
		glen.incrementGrade();
		std::cout << "this is not reached" <<  std::endl;
		Bureaucrat noob("noob", 0);
	}
	CATCH{
		std::cout << e.what() << std::endl;
	}
	Bureaucrat outside("new", 50);
	Bureaucrat noob("noob", 0);
	// std::cout << outside;
}
