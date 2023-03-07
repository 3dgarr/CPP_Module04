#pragma once

#include <iostream>
#include "./AMateria.hpp"

class	Cure
	:	public	AMateria
{
	public:
		AMateria*	clone() const;
		void 		use(ICharacter& target);

    public:
        Cure();
		Cure(const Cure&);
		Cure&	operator=(const Cure&);
        ~Cure();
};
