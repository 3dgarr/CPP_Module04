#include "./Animal.hpp"
#include "./Dog.hpp"
#include "./Cat.hpp"


int main()
{
    Animal	a;
    Animal	b = a;
    Animal  c("bo");

	c.makeSound();
}