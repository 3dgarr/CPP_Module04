#pragma once

#include <iostream>
#include "./ICharacter.hpp"

class ICharacter;

class AMateria
{
	public:
		std::string const & getType() const;    //+
		virtual AMateria* clone() const = 0;    //+
		virtual void use(ICharacter& target);   //+

    public:
        AMateria(void);
        AMateria(const AMateria&);
		AMateria(const std::string& );
        AMateria&	operator=(const AMateria&);
        virtual		~AMateria();

    protected:
		std::string	type;
};
