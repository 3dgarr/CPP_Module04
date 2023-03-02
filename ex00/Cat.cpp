#include "./Cat.hpp"

Cat::Cat()
	: Animal()
{
	type = "Cat";
	std::cout << "Default constructor of Cat called" << std::endl; 

}

Cat::Cat(const Cat& rhs)
	:	Animal(rhs)
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
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Destructor of Cat called" << std::endl; 
}

void	Cat::makeSound() const
{
	std::cout << "Meow Meow 🐱" << std::endl;
}