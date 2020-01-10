#include <iostream>

template<typename A>
void	iter(A *a, int s, void (*f)(A)){
	for(int i = 0; i < s; i++)
		f(a[i]);
}

template< typename T>
void stuff(T the_stuff){
	std::cout << the_stuff << std::endl;
}

int	main(void){
	std::string str[] = { "hello", "world", "or", "not", "!"};
	int str_size = 5;
	float num[] = { 4.36, 4.12, 7.7654, 2.45, 5.67, 3.8765, 5};
	double num1[] = { 4.36, 4.12, 7.7654, 2.45, 5.67, 3.8765, 5};
	int num_size = 7;
	std::cout << "std::string" << std::endl;
	iter(str, str_size, (stuff));
	std::cout << "float" << std::endl;
	iter(num, num_size, stuff);
	std::cout << "double" << std::endl;
	iter(num1, num_size, stuff);


}
