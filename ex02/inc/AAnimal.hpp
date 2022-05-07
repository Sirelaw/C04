#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
protected:
	std::string	_type;
	Animal();

public:
	virtual ~Animal();
	Animal(const Animal& to_copy);
	Animal& operator=(const Animal& to_assign);
	std::string	getType() const;
	virtual void	makeSound() const;
};

#endif