#include "./Animal.hpp"

Animal::Animal()
	: type("General Animal")
{
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

Animal::Animal(const std::string& anyType)
	: type(anyType)
{
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

Animal::Animal(const Animal& rhs)
	: type(rhs.type)
{
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

Animal&	Animal::operator=(const Animal& rhs)
{
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	if (this == &rhs)
		return (*this);
	type = rhs.type;
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << "I'm animal, what about you?" << std::endl;
}

Animal::~Animal()
{
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}