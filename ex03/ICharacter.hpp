#pragma once

#include "AMateria.hpp"

class AMateria;

class ICharacter
{
    public:
        virtual const std::string&  getName( void ) const = 0;
        virtual void                equip( AMateria* ) = 0;
        // virtual void                unequip( int ) = 0;
        virtual void                use( int, ICharacter& ) = 0;
        
        virtual ~ICharacter(){};
};
