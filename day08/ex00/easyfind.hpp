#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>

template<typename T>
int easyfind(T &list, int num){
	ptrdiff_t ret = 0;
	for (typename T::iterator i = list.begin(); i <= list.end(); i++){
		if (*i == num)
			return (ret);
		ret++;
	}
	throw std::exception();
}

#endif