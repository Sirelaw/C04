#include "Character.hpp"
#include "inc/MateriaSource.hpp"

int main() 
{
	IMateriaSource* src = new MateriaSource();
	MateriaSource temp1;

	temp1.learnMateria(new Ice);
	MateriaSource temp2(temp1);
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	me->unequip(2);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return (EXIT_SUCCESS);
}