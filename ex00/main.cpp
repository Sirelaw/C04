#include "inc/Animal.hpp"
#include "inc/WrongAnimal.hpp"
#include "inc/Cat.hpp"
#include "inc/WrongCat.hpp"
#include "inc/Dog.hpp"

int main() {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* wrong_cat = new WrongCat();
	const WrongCat mike;
	std::cout << meta->getType() << " " << std::endl; 
	std::cout << j->getType() << " " << std::endl; 
	std::cout << i->getType() << " " << std::endl;
	std::cout << wrong_cat->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound(); 
	wrong_cat->makeSound();
	mike.makeSound();
	delete meta;
	delete i;
	delete j;
	delete wrong_cat;
	return (0); 
}