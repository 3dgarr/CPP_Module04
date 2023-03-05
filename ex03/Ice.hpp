#pragma once

#include <iostream>
#include "./Materia.hpp"

class	Ice
	:	public	Materia
{
	public:
		AMateria*	clone() const;
		void 		use(ICharacter& target);

    public:
        Ice(/* args */);
		Ice(const Ice&);
		Ice&	operator=(const Ice&);
        ~Ice();
};

// Ice::Ice()
// 	:	Materia("ice")
// {
// }

// Ice::Ice(const Ice& rhs)
// 	:	Materia(rhs)
// {}


// Ice&	Ice::operator=(const Ice& rhs)
// {
// 	if (this == &rhs)
// 		return (*this);
// 	Materia::operator=(rhs);
// 	return (*this);
// }

// Ice::~Ice()
// {}

// AMateria*	Ice::clone() const
// {
// 	return (new Ice());
// }

// void	Ice::use(ICharacter& target)
// {
// 	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
// }