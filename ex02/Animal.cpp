#include "./Animal.hpp"

Animal::Animal()
	: type("General Animal")
{
	std::cout << "Default constructor of Animal called" << std::endl; 

}

Animal::Animal(const Animal& rhs)
	: type(rhs.type)
{
	std::cout << "Copy constructor of Animal called" << std::endl; 
}

Animal&	Animal::operator=(const Animal& rhs)
{
	std::cout << "Copy assignment operator of Animal called" << std::endl; 
	if (this == &rhs)
		return (*this);
	type = rhs.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Destructor of Animal called" << std::endl; 

}

std::string	Animal::getType(void) const
{
	return (type);
}
