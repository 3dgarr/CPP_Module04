#include "./Materia.hpp"
#include "./Character.hpp"
#include "./Cure.hpp"
#include "./Ice.hpp"

int main()
{    
    Cure        *a = new Cure();
    Ice         *b = new Ice();
    Ice         *c = new Ice();
    Cure        *d = new Cure();

    Character grno("grno");
    grno.equip(a);
    grno.equip(b);
    grno.equip(c);
    grno.equip(d);
    grno.use(1, grno);

}