#ifndef PONY_HPP
# define PONY_HPP
# include <iostream>

class	Pony{
	private:
		std::string _name;
		std::string _gender;
		std::string _color;
	public:
		Pony(void);
		~Pony(void);
		std::string	getname(void);
		std::string getgender(void);
		std::string getcolor(void);
		void		setname(std::string const str);
		void		setgender(std::string const str);
		void		setcolor(std::string const str);
};

#endif
