#ifndef SPAN_HPP
#define SPAN_HPP
#include <cstdlib>
#include <iostream>
#include <vector>

class Span
{
	private:
		unsigned int _size;
		Span(void);
	public:
		std::vector<int> _arr;
		Span(unsigned int N);
		Span(Span const & src);
		~Span(void);

		Span & operator=(Span const & rhs);
		
		void addNumber(int n);
		int shortestSpan(void) const;
		int longestSpan(void) const;

		class MaxSizeException : public std::exception
		{
			public:
				MaxSizeException(void);
				MaxSizeException(MaxSizeException const & src);
				virtual ~MaxSizeException(void) throw();
		
				MaxSizeException & operator=(MaxSizeException const & rhs);
				virtual const char *what(void) const throw();
		};

		class ElementException : public std::exception
		{
			public:
				ElementException(void);
				ElementException(ElementException const & src);
				virtual ~ElementException(void) throw();
		
				ElementException & operator=(ElementException const & rhs);
				virtual const char *what(void) const throw();
		};
};
#endif