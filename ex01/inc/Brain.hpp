#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
private:
	std::string	_ideas[100];
	int			_index;
public:
	Brain();
	~Brain();
	Brain(const Brain& to_copy);
	Brain& operator=(const Brain& to_assign);
	void	insert_idea(std::string idea);
	std::string	retrieve_idea(int i) const;
};

#endif