#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include <string>

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:
	
public:
	WrongCat();
	~WrongCat();
	WrongCat(const WrongCat& to_copy);
	WrongCat& operator=(const WrongCat& to_assign);
	void	makeSound() const;
};

#endif