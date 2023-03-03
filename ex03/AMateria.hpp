#pragma once

#include <iostream>

class ICharacter;

class AMateria
{
	public:
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		// virtual void use(ICharacter& target);

    public:
        AMateria(void);
        AMateria(const AMateria&);
		AMateria(const std::string& );
        AMateria&	operator=(const AMateria&);
        virtual		~AMateria();

    protected:
		std::string	type;
};
