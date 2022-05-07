#include "../inc/Cat.hpp"

Cat::Cat()
{
	Animal::_type = "Cat";
	_cell = new Brain;
	std::cout << "Default: The world has one more cat to deal with." << std::endl;
}

Cat::Cat(const Cat& to_copy)
{
	_cell = new Brain;
	*this = to_copy;
	std::cout << "Copy: A new cat clone has been created." << std::endl;
}

Cat::~Cat()
{
	delete _cell;
	std::cout << "Cat Destructor: Cat is gone" << std::endl;
}

Cat& Cat::operator=(const Cat& to_assign)
{
	if (this != &to_assign)
	{
		_type = to_assign._type;
		*_cell = *(to_assign._cell);
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Cat Meeeeeowwwww...." << std::endl;
}

std::string	Cat::retrieve_idea(int i) const
{
	return(_cell->retrieve_idea(i));
}

void	Cat::insert_idea(std::string idea)
{
	_cell->insert_idea(idea);
}