#include "../inc/WrongCat.hpp"

WrongCat::WrongCat()
{
	WrongAnimal::_type = "WrongCat";
	std::cout << "Default: The world has one more wrong_cat to deal with." << std::endl;
}

WrongCat::WrongCat(const WrongCat& to_copy)
{
	*this = to_copy;
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor: Wrong_Cat is gone" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& to_assign)
{
	if (this != &to_assign)
	{
		_type = to_assign._type;
	}
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "Wrong_Cat Meeeeeowwwww...." << std::endl;
}