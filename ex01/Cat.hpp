#pragma once
#include "./Animal.hpp"
#include "./Brain.hpp"

class Cat
	:	public Animal
{
    public:
        void	makeSound(void) const;

    public:
        Cat();
        Cat(const Cat&);
        Cat& operator=(const Cat&);
        ~Cat();

	private:
		Brain *brain;
};
