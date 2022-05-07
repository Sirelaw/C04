#include "../inc/Cat.hpp"

Cat::Cat()
{
	Animal::_type = "Cat";
	std::cout << "Default: The world has one more cat to deal with." << std::endl;
}

Cat::Cat(const Cat& to_copy)
{
	*this = to_copy;
}

Cat::~Cat()
{
	std::cout << "Destructor: Cat is gone" << std::endl;
}

Cat& Cat::operator=(const Cat& to_assign)
{
	if (this != &to_assign)
	{
		_type = to_assign._type;
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Cat Meeeeeowwwww...." << std::endl;
}