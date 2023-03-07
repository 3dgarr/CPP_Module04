#include "./Character.hpp"

const std::string&  Character::getName( void ) const 
{
    return (name);
}

void    Character::use(int index, ICharacter& character)
{
    if (index < 0 || index > 3)
	{
		std::cout << "Invalid index of inventory : " << index << std::endl;
		return ;
	}
	if (!inventory[index])
	{
		std::cout << "The slot in index " << index << " is empty" << std::endl;
		return ;
	}
	inventory[index]->use(character);
    return ; 
}


void    Character::equip( AMateria* materiaPtr)
{
    if (!materiaPtr)
	{
		std::cout << name << "can not equip NULL" << materiaPtr->getType() << std::endl;
		return ;
	}

	for (size_t i = 0; i < 5; i++)
    {
		if (i == 4)
		{
			std::cout << "the inventory is fu(ll*2)" << std::endl;
			return ;
		}
		if (inventory[i] == materiaPtr)
        {
            std::cout << name << " has already the materia " << materiaPtr->getType() << std::endl;
            return ;
        }
        if (inventory[i] == NULL)
		{
			inventory[i] = materiaPtr;
            // std::cout << name << " equips the materia "  << materiaPtr->getType() << std::endl;
			return ;
		}
    }         
}

void	Character::unequip(int idx )
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "There is materia in index " << idx << std::endl;
		return ;
	}
	if (inventory[idx] == NULL)
	{
		std::cout << "The slot in index " << idx << " is empty" << std::endl;
		return ;
	}
	inventory[idx] = NULL;
}
        
Character::Character(const std::string& _name)
{
	name = _name;
	for (size_t i = 0; i < 4; i++)
	{
		inventory[i] = NULL ;
	}

}

Character::Character()
{
	name = "Unnamed";
	for (size_t i = 0; i < 4; i++)
	{
		inventory[i] = NULL ;
	}
}

Character::Character(const Character& rhs)
{
	name = rhs.name;
	for (size_t i = 0; i < 4; i++)
	{
		inventory[i] = rhs.inventory[i]->clone();
	}
}

Character&  Character::operator=(const Character& rhs)
{
    if (this == &rhs)
	{
        return (*this);
	}
	for (size_t i = 0; i < 4; i++)
	{
        delete inventory[i];
        inventory[i] = NULL;
	}
    for(size_t i = 0; i < 4; i++)
    {
		inventory[i] = rhs.inventory[i]->clone();
    }
    name = rhs.name;
    return (*this);
}

Character::~Character()
{
    for (size_t i = 0; i < 4; i++)
	{
        delete inventory[i];
        inventory[i] = NULL;
	}
}
