#include"./AMateria.hpp"

const std::string&	AMateria::getType() const
{
	return (type);
}

void AMateria::use(ICharacter& target)
{
    std::cout << "Character " << target.getName() << " uses " <<  type << " of materia" << std::endl;
}


AMateria::AMateria(const std::string & t)
	:   type(t)
{
	// std::cout << "Parameterized constructor of AMateria called" << std::endl; 
}

AMateria::AMateria()
	: type("Materia")
{
	// std::cout << "Default constructor of AMateria called" << std::endl; 
}

AMateria::AMateria(const AMateria& rhs)
	: type(rhs.type)
{
	// std::cout << "Copy constructor of AMateria called" << std::endl; 
}

AMateria&	AMateria::operator=(const AMateria& rhs)
{
	// std::cout << "Copy assignment operator of AMateria called" << std::endl; 
	if (this == &rhs)
		return (*this);
	type = rhs.type;
	return (*this);
}

AMateria::~AMateria()
{
	// std::cout << "Destructor of AMateria called" << std::endl; 
}