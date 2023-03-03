#pragma once
#include "./ICharacter.hpp"
#include "./Materia.hpp"

class   Character
    :   public  ICharacter
{
	public:
		const std::string&  getName( void ) const ;//+
        void                equip( AMateria* ) ;
        void                unequip( int ) ;
        void                use( int, ICharacter& ) ;

    public:
        Character();//+
        Character(const Character&);//+
        Character&	operator=(const Character&);//+
        ~Character();//+

	private:
		AMateria		*inventory[4];
		std::string		name;
		std::size_t		size;
};


