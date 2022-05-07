#include "inc/Animal.hpp"
#include "inc/Cat.hpp"
#include "inc/Dog.hpp"

int main() {
	Animal	*school[10];
	Cat		lucky;

	for (int i = 0; i < 5; i++)
		school[i] = new Dog();
	for (int i = 5; i < 10; i++)
		school[i] = new Cat();
	school[0]->makeSound();
	school[9]->makeSound();
	for (int i = 0; i < 10; i++)
		delete school[i];
	std::cout << "<<<<<<<<--------------------->>>>>>>>" << std::endl;
	lucky.insert_idea("I want to eat that shoe.");
	lucky.insert_idea("What is the essence of life.");
	lucky.insert_idea("How about some bone ehn.");
	Cat		captain(lucky);
	std::cout << captain.retrieve_idea(1) << std::endl;
	return 0;
}