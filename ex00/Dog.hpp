#pragma once
#include "./Animal.hpp"

class Dog
	: public Animal
{
    public:
        void	makeSound(void) const;

    public:
        Dog();
        Dog(const Dog&);
        Dog& operator=(const Dog&);
        ~Dog();
};
