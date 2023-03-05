#include "./Cure.hpp"

Cure::Cure()
	:	Materia("ice")
{
}

Cure::Cure(const Cure& rhs)
	:	Materia(rhs)
{}


Cure&	Cure::operator=(const Cure& rhs)
{
	if (this == &rhs)
		return (*this);
	Materia::operator=(rhs);
	return (*this);
}

Cure::~Cure()
{}

AMateria*	Cure::clone() const
{
	return (new Cure());
}

void	Cure::use(ICharacter& target)
{//"* heals <name>’s wounds *"
	std::cout << "* heals  " << target.getName() << "’s wounds *" << std::endl;
}