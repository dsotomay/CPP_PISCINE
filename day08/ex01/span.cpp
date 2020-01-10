#include "span.hpp"

Span::Span(unsigned int N): _size(N){
	_arr.reserve(N);
}

Span::Span(Span const & src){
	*this = src;
}

Span::~Span(void){}

Span & Span::operator=(Span const & rhs){
	_arr = rhs._arr;
	_size = rhs._size;
	return *this;
}

void Span::addNumber(int n){
	if (_arr.size() < _size)
		_arr.push_back(n);
	else
		throw MaxSizeException();
}

int Span::shortestSpan(void) const{
	int	ret = INT_MAX;
	if (_size <= 1 || _arr.size() <= 1)
		throw ElementException();
	std::vector<int> arr = _arr; 
	std::sort(arr.begin(), arr.end());
	for (std::vector<int>::iterator i = arr.begin(), j = arr.begin(); i < arr.end(); i++)
		if (*++j && std::abs(*i - *j) < ret)
			ret = std::abs(*i - *j);
	return (ret);
}

int Span::longestSpan(void) const{
	if (_size <= 1 || _arr.size() <= 1)
		throw ElementException();
	return std::abs(*std::max_element(_arr.begin(), _arr.end()) - *std::min_element(_arr.begin(), _arr.end()));
}

Span::MaxSizeException::MaxSizeException(void){}
Span::MaxSizeException::MaxSizeException(MaxSizeException const & src){ *this = src; }
Span::MaxSizeException::~MaxSizeException(void) throw(){}
Span::MaxSizeException & Span::MaxSizeException::operator=(MaxSizeException const & rhs){
	static_cast<void>(rhs);
	return *this;
}
char const *Span::MaxSizeException::what()const throw(){
	return ("Already at max capacity!");
}

Span::ElementException::ElementException(void){}
Span::ElementException::ElementException(ElementException const & src){ *this = src; }
Span::ElementException::~ElementException(void) throw(){}
Span::ElementException & Span::ElementException::operator=(ElementException const & rhs){
	static_cast<void>(rhs);
	return *this;
}
char const *Span::ElementException::what()const throw(){
	return ("no or to few elements");
}
