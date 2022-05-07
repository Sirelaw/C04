#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>

#include "Animal.hpp"

class Cat : public Animal
{
private:
	
public:
	Cat();
	~Cat();
	Cat(const Cat& to_copy);
	Cat& operator=(const Cat& to_assign);
	void	makeSound() const;
};

#endif