#include "Pony.hpp"

static void	ponyOnTheStack(void){
	Pony pony;
	pony.setname("Bob");
	pony.setgender("male");
	pony.setcolor("brown");
	std::cout << "The pony's name is " << pony.getname() << std::endl;
	std::cout << "The pony's gender is " << pony.getgender() << std::endl;
	std::cout << "The pony's color is " << pony.getcolor() << std::endl;
}

static void	ponyOnTheHeap(void){
	Pony *pony = new Pony;
	pony->setname("Epona");
	pony->setgender("female");
	pony->setcolor("red");
	std::cout << "The pony's name is " << pony->getname() << std::endl;
	std::cout << "The pony's gender is " << pony->getgender() << std::endl;
	std::cout << "The pony's color is " << pony->getcolor() << std::endl;
	delete pony;
}

int main(){
	ponyOnTheStack();
	ponyOnTheHeap();
}
