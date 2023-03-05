#include "./Character.hpp"

const std::string&  Character::getName( void ) const 
{
    return (name);
}

void    Character::use(int index, ICharacter& character)
{
    if (index >= 0 && index <= 3 && inventory[index])
        inventory[index]->use(character);
    return ; 
}


void    Character::equip( AMateria* materiaPtr)
{
    if (!materiaPtr || sizeOfInventory > 3)
        return ;
    for (size_t i = 0; i < sizeOfInventory; i++)
    {
        if (inventory[i] == materiaPtr)
        {
            std::cout << name << " has already the materia " << materiaPtr->getType() << std::endl;
            return ;
        }
    }
    for (size_t i = 0; i < sizeOfInventory; i++)
    {
        if (inventory[i] == nullptr)
        {
            inventory[sizeOfInventory++] = materiaPtr;
            std::cout << name << " equips the materia" << materiaPtr->getType() << std::endl;
        }
    }
    
    
           
}




        
Character::Character(const std::string& _name)
{
	name = _name;
	sizeOfInventory  = 0;
}

Character::Character()
{
	name = "Unnamed";
	sizeOfInventory  = 0;
}

Character::Character(const Character& rhs)
{
	name = rhs.name;
	sizeOfInventory = rhs.sizeOfInventory;
	for (size_t i = 0; i < sizeOfInventory; i++)
	{
		inventory[i] = rhs.inventory[i]->clone();
	}
}

Character&  Character::operator=(const Character& rhs)
{
    if (this == &rhs)
        return (*this);
	for (size_t i = 0; i < sizeOfInventory; i++)
	{
        delete inventory[i];
        inventory[i] = nullptr;
	}
	sizeOfInventory = rhs.sizeOfInventory;
    for(size_t i = 0; i < sizeOfInventory; i++)
    {
		inventory[i] = rhs.inventory[i]->clone();
    }
    name = rhs.name;
    return (*this);
}

Character::~Character()
{
    for (size_t i = 0; i < sizeOfInventory; i++)
	{
        delete inventory[i];
        inventory[i] = nullptr;
	}
}
