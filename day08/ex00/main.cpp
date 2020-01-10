#include "easyfind.hpp"
#include <iostream>
#include <vector>

int main(void){
	try{
		int my_ints[] = { 24, 45, 2, 100 ,64};
		std::vector<int> l1 (my_ints, my_ints + sizeof(my_ints) / sizeof(int));
		int index = easyfind(l1, 100);
		std::cout << "found 100 at index " << index << std::endl;
		assert(my_ints[easyfind(l1, 3)] == 3);
	}
	catch (std::exception){
		std::cout << "3 was not found in array!" << std::endl;		
	}
}
