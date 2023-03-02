#include "./Animal.hpp"
#include "./Dog.hpp"
#include "./Cat.hpp"
#include "./WrongAnimal.hpp"
#include "./WrongCat.hpp"


int main()
{
	// Animal	a;
	// Cat		c;
	// Dog		d;

	// Animal *dog = new Dog();

	// dog->makeSound();

	// delete	dog;
	// a.makeSound();
	// c.makeSound();
	// d.makeSound();

	/*	My tests ^	*/
	/*	         |	*/

/*=====================================================================*/

	// const Animal* meta = new Animal();
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound(); //will output the cat sound!
	// j->makeSound();
	// meta->makeSound();

	// delete meta;
	// delete j;
	// delete i;

	WrongCat	cat;
	cat.makeSound();


}