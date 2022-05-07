#include "../inc/AAnimal.hpp"

Animal::Animal()
	: _type("Ancestor")
{
	std::cout << "Default: I'm an animal but what type?" << std::endl;
}

Animal::Animal(const Animal& to_copy)
{
	*this = to_copy;
}

Animal::~Animal()
{
	std::cout << "Destructor: Animal is gone" << std::endl;
}

Animal& Animal::operator=(const Animal& to_assign)
{
	if (this != &to_assign)
	{
		_type = to_assign._type;
	}
	return (*this);
}

std::string Animal::getType() const
{
	return (_type);
}

void	Animal::makeSound() const
{
	std::cout << "An animal snores...I guess" << std::endl;
}