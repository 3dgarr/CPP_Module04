#pragma once

#include <iostream>

class WrongAnimal
{
    public:
        void		makeSound(void) const;
		std::string	getType(void) const;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal&);
        WrongAnimal& operator=(const WrongAnimal&);
        virtual ~WrongAnimal();
    protected:
        std::string	type;
};
