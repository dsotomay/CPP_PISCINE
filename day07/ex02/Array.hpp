#ifndef ARRAY_HPP
# define ARRAY_HPP

template<typename T>
class Array
{
	public:
		unsigned int size
		T	*array;
		
		Array(void): size(0), array(NULL){};
		Array(unsigned int n): size(n), array(new T[]n){};
		Array(Array const & src){*this = src;};
		~Array(void){};

		Array & operator=(Array const & rhs){
			T *arr = new T[rhs.size];
			arr.size = 
			*this = rhs;
			return ();
		}

		Array & operator[](Array const & rhs){
			if (this[])
		}
};

#endif