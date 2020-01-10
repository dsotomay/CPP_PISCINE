#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>

int main(int ac, char **av){
	if (ac > 1){
		char *arg1 = av[1];
		std::string arg = av[1];
		char my_char = 0;
		std::string c_fail;
		int	my_int = 0;
		std::string i_fail;
		float my_float = 0;
		std::string f_fail;
		double my_double = 0;
		std::string d_fail;
		try{
			my_double = std::atof(arg1);
			double test = my_double - static_cast<int>(my_double);
			if (!test)
				std::cout << std::setprecision(1) << std::fixed;
		}
		catch (std::exception){
			if (arg == "nan" || arg == "nanf")
				d_fail = "nan";
			else if (arg == "inf" || arg == "inff")
				d_fail = "inf";
			else if (arg == "-inf" || arg == "-inff")
				d_fail = "-inf";
			else if (arg == "+inf" || arg == "+inff")
				d_fail = "inf";
			else
				d_fail = "impossible";
		}
		try{
			my_float = static_cast<float>(my_double);
		}
		catch (std::exception){
			if (arg == "nan" || arg == "nanf")
				f_fail = "nanf";
			else if (arg == "inff" || arg == "inff")
				f_fail = "inff";
			else if (arg == "-inf" || arg == "-inff")
				f_fail = "-inff";
			else if (arg == "+inf" || arg == "+inff")
				f_fail = "inff";
			else
				f_fail = "impossible";
		}
		try{
			if (arg == "nan" || arg == "nanf" || arg == "inff" || arg == "inff" 
			|| arg == "-inf" || arg == "-inff" || arg == "+inf" || arg == "+inff")
				throw std::exception();
			my_int = static_cast<int>(my_float);
		}
		catch (std::exception){
			i_fail = "impossible";
		}
		try{
			my_char = static_cast<char>(my_int);
			if (arg == "nan" || arg == "nanf" || arg == "inff" || arg == "inff" 
			|| arg == "-inf" || arg == "-inff" || arg == "+inf" || arg == "+inff")
				throw std::exception();
			if (my_char >= -128 && my_char <= 127){
				if (!(my_char <= 126 && my_char >= 32))
					c_fail = "Non displayable";
			}
			else
				throw std::exception();
		}
		catch (std::exception){
			c_fail = "impossible";
		}
		if (!c_fail.length()){
			std::cout << "char: '" << my_char  << "'" << std::endl;
		}
		else
			std::cout << "char: " << c_fail << std::endl;
		if (!i_fail.length()){
			std::cout << "int: " << my_int << std::endl;
		}
		else
			std::cout << "int: " << i_fail << std::endl;
		if (!f_fail.length()){
			std::cout << "float: " << my_float << "f" << std::endl;
		}
		else
			std::cout << "float: " << f_fail << std::endl;
		if (!d_fail.length()){
			std::cout << "double: " << my_double << std::endl;
		}
		else
			std::cout << "double: " << d_fail << std::endl;
	}
}
