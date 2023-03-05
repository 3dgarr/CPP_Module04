#pragma once

#include <iostream>
#include "./Materia.hpp"

class	Cure
	:	public	Materia
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
