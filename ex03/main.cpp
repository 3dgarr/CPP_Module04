#include "./IMateriaSource.hpp"
#include "./MateriaSource.hpp"
#include "./Character.hpp"
#include "./Cure.hpp"
#include "./Ice.hpp"

int main()
{    
    // AMateria       *a = new Cure();
    // AMateria       *b = new Ice();
    // AMateria       *c = new Ice();
    // AMateria       *d = new Cure();

    // Character grno("grno");
    // grno.equip(a);
    // grno.equip(b);
    // grno.equip(c);
    // grno.equip(d);
    // grno.equip(d);
    // grno.use(0, grno);
    // grno.use(1, grno);
    // grno.use(2, grno);
    // grno.use(3, grno);
    // grno.unequip(3);
    // grno.use(4, grno);
	

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
}