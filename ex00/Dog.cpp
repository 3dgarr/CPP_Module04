#include "./Dog.hpp"

Dog::Dog()
	: Animal()
{
	type = "Dog";
	std::cout << "Default Constructor of Dog called" << std::endl; 

}

Dog::Dog(const Dog& rhs)
	:	Animal(rhs)
{
	type  = rhs.type ;
	std::cout << "Copy Constructor of Dog called" << std::endl;
}

Dog&	Dog::operator=(const Dog& rhs)
{
	std::cout << "Copy assignment operator of Dog called" << std::endl; 
	if (this == &rhs)
		return (*this);
	type  = rhs.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Destructor of Dog called" << std::endl; 
}

void	Dog::makeSound() const
{
	std::cout << "Bark Bark  🐕" << std::endl;
}