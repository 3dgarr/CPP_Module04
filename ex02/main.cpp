#include "./Animal.hpp"
#include "./Dog.hpp"
#include "./Cat.hpp"
#include "./Brain.hpp"


int main()
{

	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;

	// Dog	b;
	// Cat a;
	
	// ==============TEST OF BRAIN/*==============
	// Brain	b;
	// for (size_t i = 0; i < 102; i++)
	// {
	// 	std::cout << i << ": " << b.getIdeaOfIndex(i) << std::endl; 
	// }
	
	// for (size_t i = 0; i < 120; i++)
	// {
	// 	// std::cout << i << ": " << b.getIdeaOfIndex(i) << std::endl; 
	// 	b.setTheIdea(std::string("ideaNO"));
	// }

	// for (size_t i = 0; i < 102; i++)
	// {
	// 	std::cout << i << ": " << b.getIdeaOfIndex(i) << std::endl; 
	// }
	// ==============TEST OF BRAIN/*==============
	
}