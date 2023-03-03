#include "./Materia.hpp"

AMateria*	Materia::clone() const
{
	return (new Materia(type));
}


Materia::Materia(void)
	:	AMateria()
{
	std::cout << "Default constructor of Materia called" << std::endl; 
}

Materia::Materia(const std::string & t)
    :	AMateria(t)
{
	std::cout << "Parameterized constructor of Materia called" << std::endl; 
}

Materia::Materia(const Materia& rhs)
	:	AMateria(rhs)
{
	type = rhs.type;
	std::cout << "Copy constructor of Materia called" << std::endl; 
}

Materia&	Materia::operator=(const Materia& rhs)
{
	std::cout << "Copy assignment operator of Materia called" << std::endl; 
	if (this == &rhs)
		return (*this);
	type = rhs.type;
	return (*this);
}

Materia::~Materia()
{
	std::cout << "Destructor of Materia called" << std::endl; 
}