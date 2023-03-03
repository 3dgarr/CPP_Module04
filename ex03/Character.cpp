#include "./Character.hpp"

const std::string&  Character::getName( void ) const 
{
    return (name);
}








Character::Character()
{
	name = "Unnamed";
	size  = 0;
}

Character::Character(const Character& rhs)
{
	name = rhs.name;
	size = rhs.size;
	for (size_t i = 0; i < size; i++)
	{
		inventory[i] = rhs.inventory[i]->clone();
	}
}

Character&  Character::operator=(const Character& rhs)
{
    if (this == &rhs)
        return (*this);
	for (size_t i = 0; i < size; i++)
	{
        delete inventory[i];
        inventory[i] = nullptr;
	}
	size = rhs.size;
    for(size_t i = 0; i < size; i++)
    {
		inventory[i] = rhs.inventory[i]->clone();
    }
    name = rhs.name;
    return (*this);
}

Character::~Character()
{
    for (size_t i = 0; i < size; i++)
	{
        delete inventory[i];
        inventory[i] = nullptr;
	}
}
