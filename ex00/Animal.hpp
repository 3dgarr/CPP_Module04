#pragma once

#include <iostream>

class Animal
{
    public:
        virtual void	makeSound(void) const;//+

    public:
        Animal();//+
        Animal(const std::string&);//+
        Animal(const Animal&);//+
        Animal& operator=(const Animal&);//+
        virtual ~Animal();//+
    protected:
        std::string	type;
};
