#include "../inc/Dog.hpp"

Dog::Dog()
{
	Animal::_type = "Dog";
	_cell = new Brain;
	std::cout << "Default: A new dog has been born" << std::endl;
}

Dog::Dog(const Dog& to_copy)
{
	_cell = new Brain;
	*this = to_copy;
	std::cout << "Copy: A new dog clone has been created." << std::endl;
}

Dog::~Dog()
{
	delete _cell;
	std::cout << "Dog Destructor: Dog is gone" << std::endl;
}

Dog& Dog::operator=(const Dog& to_assign)
{
	if (this != &to_assign)
	{
		_type = to_assign._type;
		*_cell = *(to_assign._cell);
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Dog Woooofffff!!!" << std::endl;
}

std::string	Dog::retrieve_idea(int i) const
{
	return(_cell->retrieve_idea(i));
}

void	Dog::insert_idea(std::string idea)
{
	_cell->insert_idea(idea);
}
