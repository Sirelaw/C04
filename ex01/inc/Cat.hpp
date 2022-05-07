#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain*	_cell;
public:
	Cat();
	~Cat();
	Cat(const Cat& to_copy);
	Cat& operator=(const Cat& to_assign);
	void	makeSound() const;
	void	insert_idea(std::string idea);
	std::string	retrieve_idea(int i) const;
};

#endif