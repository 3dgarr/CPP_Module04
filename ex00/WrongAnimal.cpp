#include "./WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
	: type("General WrongAnimal")
{
	std::cout << "Default constructor of WrongAnimal called" << std::endl; 

}

WrongAnimal::WrongAnimal(const WrongAnimal& rhs)
	: type(rhs.type)
{
	std::cout << "Copy constructor of WrongAnimal called" << std::endl; 
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& rhs)
{
	std::cout << "Copy assignment operator of WrongAnimal called" << std::endl; 
	if (this == &rhs)
		return (*this);
	type = rhs.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor of WrongAnimal called" << std::endl; 

}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "I'm animal, what about you?" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (type);
}
