#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
	: _type("Ancestor")
{
	std::cout << "Default: I'm a Wrong_animal but what type?" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& to_copy)
{
	*this = to_copy;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor: Wrong_animal is gone" << std::endl;
}


WrongAnimal& WrongAnimal::operator=(const WrongAnimal& to_assign)
{
	if (this != &to_assign)
	{
		_type = to_assign._type;
	}
	return (*this);
}

std::string WrongAnimal::getType() const
{
	return (_type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "A wrong_animal snores...I guess" << std::endl;
}