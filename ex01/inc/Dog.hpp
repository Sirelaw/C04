#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain*	_cell;
public:
	Dog();
	~Dog();
	Dog(const Dog& to_copy);
	Dog& operator=(const Dog& to_assign);
	void	makeSound() const;
	void	insert_idea(std::string idea);
	std::string	retrieve_idea(int i) const;
};

#endif