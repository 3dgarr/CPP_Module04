#pragma once

#include <iostream>
#include "./AMateria.hpp"

class	Ice
	:	public	AMateria
{
	public:
		AMateria*	clone() const;
		void 		use(ICharacter& target);

    public:
        Ice();
		Ice(const Ice&);
		Ice&	operator=(const Ice&);
        ~Ice();
};
