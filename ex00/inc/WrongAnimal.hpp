#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>


class WrongAnimal
{
protected:
	std::string	_type;

public:
	WrongAnimal();
	virtual ~WrongAnimal();
	WrongAnimal(const WrongAnimal& to_copy);
	WrongAnimal& operator=(const WrongAnimal& to_assign);
	std::string	getType() const;
	void	makeSound() const;
};

#endif