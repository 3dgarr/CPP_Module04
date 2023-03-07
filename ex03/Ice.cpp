#include "./Ice.hpp"

Ice::Ice()
	:	AMateria("ice")
{
}

Ice::Ice(const Ice& rhs)
	:	AMateria(rhs)
{}


Ice&	Ice::operator=(const Ice& rhs)
{
	if (this == &rhs)
		return (*this);
	AMateria::operator=(rhs);
	return (*this);
}

Ice::~Ice()
{}

AMateria*	Ice::clone() const
{
	return (new Ice());
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}