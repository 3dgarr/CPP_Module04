#pragma once

#include "./AMateria.hpp"

class	Materia
    :	public	AMateria
{
	public:
		AMateria*	clone() const;
		// virtual void use(ICharacter& target);

	public:
        Materia(void);
        Materia(const Materia&);
		Materia(const std::string& );
        Materia&	operator=(const Materia&);
		virtual	~Materia();
};

