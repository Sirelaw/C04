#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
protected:
	std::string	_type;

public:
	Animal();
	virtual ~Animal();
	Animal(const Animal& to_copy);
	Animal& operator=(const Animal& to_assign);
	std::string	getType() const;
	virtual void	makeSound() const;
};

#endif