#pragma once

#include <iostream>

class Animal
{
    public:
        virtual void		makeSound(void) const;//+
		virtual std::string	getType(void) const;
    public:
        Animal();
        Animal(const Animal&);
        Animal& operator=(const Animal&);
        virtual ~Animal();
    protected:
        std::string	type;
};
