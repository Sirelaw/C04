#include "../inc/Brain.hpp"

Brain::Brain()
	: _index(0)
{
	std::cout << "Brain Default: Brain......more zombie food!!!" << std::endl;
}

Brain::Brain(const Brain& to_copy)
{
	*this = to_copy;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor: consumed by system zombie." << std::endl;
}

Brain& Brain::operator=(const Brain& to_assign)
{
	if (this != &to_assign)
	{
		for (int i = 0; i < 100; i++)
			_ideas[i] = to_assign._ideas[i];
	std::cout << "Copy: A brain clone has been created." << std::endl;
	}
	return (*this);
}

void	Brain::insert_idea(std::string idea)
{
	if (_index == 100)
		_index = 0;
	_ideas[_index++] = idea;
}

std::string	Brain::retrieve_idea(int index) const
{
	if (index >= 0 && index < 100)
		return (_ideas[index]);
	else
		return ("Emptyness.................");
}