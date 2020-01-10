#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <stack>
# include <list>

template <class T>
class MutantStack : public std::stack<T>
{
	private:
		std::list<T> _my_stack;
	public:
		MutantStack<T>(void){}
		MutantStack(MutantStack const & src){ static_cast<void> (src); return; }
		~MutantStack(void){}

		MutantStack & operator= (MutantStack const & rhs) { static_cast<void>(rhs); return *this; }
		
		typedef typename std::list<T>::iterator iterator;

		T			size(void){
			return _my_stack.size();
		}

		T			top(void){
			return _my_stack.front();
		}

		void		push(T data){
			_my_stack.push_front(data);
		}

		void		pop(void){
			_my_stack.pop_front();
		}

		iterator	begin(){
			return _my_stack.begin();
		}

		iterator end(){
			return _my_stack.end();
		}
};

#endif
