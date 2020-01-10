#include "contact.class.hpp"
Contact::Contact( void ){
	return;
}

Contact::~Contact( void ){
	return;
}

std::string const info[11] = { "first name", "last name", "nickname",
		"login", "postal address", "email address", "phone number",
		"birth date", "favorite meal", "underwear color", "darkest secret"};

void	Contact::Add( const std::string info[] ){
	std::cin.ignore();
	for (std::string::size_type i = 0; i < 11; ++i){
		std::cout << "Please input your " << info[i] << ": ";
		std::cin.clear();
		std::getline (std::cin, _contact_info[i]);
	}
};

void	Contact::Search( int count_contact){
	std::cout << std::setw(10) << count_contact;
	for (std::string::size_type i = 0; i < 3; ++i){
		std::cout << '|';
		if (_contact_info[i].length() > 10){
			std::string sub = _contact_info[i].substr(0, 9) += '.';
			std::cout  << std::setw(10) << sub;
		}
		else{
			std::cout << std::setw(10) << _contact_info[i];
		}
	}
	std::cout << std::endl;
};

int		Contact::check( void ){
	return (_contact_info[0].length());
};

void	Contact::Print( ){
	for (std::string::size_type i = 0; i < 11; ++i){
		std::cout << info[i] << ": " << _contact_info[i] << std::endl;
	}
}


int main(){
	Contact my_list[8];
	static int count_contacts = 0;
	std::string function;
	std::string count;
	int			num = 0;
	while (1){
		std::cout << "Would you like to SEARCH, ADD an entry or EXIT: ";
		std::cin >> function;
		if (function == "EXIT")
			std::_Exit(0);
		else if (function == "ADD"){
			if (count_contacts < 8){
				my_list[count_contacts].Add( info );
				count_contacts++;
			}
			else
				std::cout << "Sorry contact list is full. Please choose either to SEARCH or EXIT" << std::endl;
		}
		else if (function == "SEARCH"){
			if (count_contacts != 0){
				for (std::string::size_type i = 0; i < 8; ++i){
					if (my_list[i].check() == 0)
						break;
					my_list[i].Search( i );
				}
				std::cin.ignore();
				while (1){
					std::cout << "Please choose an entry number: ";
					std::getline (std::cin, count);
					bool is_numbers = true;
					for (std::string::iterator i = count.begin(); i != count.end(); i++){
						if (!(*i >= '0' && *i <= '9'))
							is_numbers = false;
						if (!is_numbers)
							break;
					}
					if (is_numbers)
						num = atoi(count.c_str());
					if (!is_numbers || !(num >= 0 && num < 8) || num >= count_contacts){
						num = 0;
						std::cout << "Invalid option" << std::endl; 
					}
					else{
						my_list[num].Print();
						break;
					}
				}
			}
			else{
				std::cout << "Please ADD an entry first!" << std::endl;
			}
		}
	}
}