#include "./Cat.hpp"

Cat::Cat()
	:	Animal(),
		brain(new Brain())
{
	std::cout << "Default constructor of Cat called" << std::endl;
	type = "Cat";

}

Cat::Cat(const Cat& rhs)
	:	Animal(rhs),
		brain(new Brain(*(rhs.brain)))
{
	type  = rhs.type ;
	std::cout << "Copy constructor of Cat called" << std::endl;
}

Cat&	Cat::operator=(const Cat& rhs)
{
	std::cout << "Copy assignment operator of Cat called" << std::endl; 
	if (this == &rhs)
		return (*this);
	type  = rhs.type;
	delete	brain;
	brain = new Brain(*(rhs.brain));
	return (*this);
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Destructor of Cat called" << std::endl; 
}

void	Cat::makeSound() const
{
	std::cout << "Meow Meow 🐱" << std::endl;
}