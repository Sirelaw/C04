#include "../inc/Dog.hpp"

Dog::Dog()
{
	Animal::_type = "Dog";
	std::cout << "Default: A new dog has been born" << std::endl;
}

Dog::Dog(const Dog& to_copy)
{
	*this = to_copy;
}

Dog::~Dog()
{
	std::cout << "Destructor: Dog is gone" << std::endl;
}

Dog& Dog::operator=(const Dog& to_assign)
{
	if (this != &to_assign)
	{
		_type = to_assign._type;
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Dog Woooofffff!!!" << std::endl;
}