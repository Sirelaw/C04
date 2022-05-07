#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>

#include "Animal.hpp"

class Dog : public Animal
{
private:
	
public:
	Dog();
	~Dog();
	Dog(const Dog& to_copy);
	Dog& operator=(const Dog& to_assign);
	void	makeSound() const;
};

#endif