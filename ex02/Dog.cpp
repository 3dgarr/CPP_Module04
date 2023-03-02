#include "./Dog.hpp"

Dog::Dog()
	:	Animal(),
		brain(new Brain())
{
	std::cout << "Default Constructor of Dog called" << std::endl; 
	type = "Dog";

}

Dog::Dog(const Dog& rhs)
	:	Animal(rhs),
		brain(new Brain(*(rhs.brain)))

{
	std::cout << "Copy Constructor of Dog called" << std::endl;
	type  = rhs.type ;
}

Dog&	Dog::operator=(const Dog& rhs)
{
	std::cout << "Copy assignment operator of Dog called" << std::endl; 
	if (this == &rhs)
		return (*this);
	type  = rhs.type;
	delete	brain;
	brain = new Brain(*(rhs.brain));
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Destructor of Dog called" << std::endl;
	delete	brain;
}

void	Dog::makeSound() const
{
	std::cout << "Bark Bark  🐕" << std::endl;
}