#include "./WrongCat.hpp"

WrongCat::WrongCat()
	:	WrongAnimal()
{
	type = "WrongCat";
	std::cout << "Default constructor of WrongCat called" << std::endl; 

}

WrongCat::WrongCat(const WrongCat& rhs)
	:	WrongAnimal(rhs)
{
	type  = rhs.type ;
	std::cout << "Copy constructor of WrongCat called" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& rhs)
{
	std::cout << "Copy assignment operator of WrongCat called" << std::endl; 
	if (this == &rhs)
		return (*this);
	type  = rhs.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor of WrongCat called" << std::endl; 
}

// void	WrongCat::makeSound() const
// {
// 	std::cout << "Meow Meow 🐱" << std::endl;
// }