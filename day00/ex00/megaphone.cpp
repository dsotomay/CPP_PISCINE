#include <iostream>
#include <string>
#include <locale>

int main(int ac, char **av){
	if (ac > 1){
		std::locale loc;
		for (std::string::size_type i = 1; av[i]; ++i){
			for (std::string::size_type j = 0; av[i][j]; ++j){
				std::cout << std::toupper(av[i][j], loc);
			}
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}
