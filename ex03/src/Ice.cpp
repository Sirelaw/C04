#include "../inc/Ice.hpp"

Ice::Ice()
{
	_type = "ice";
	std::cout << "* Ice constructing. *" << this->getType() << std::endl;
}

Ice::Ice(const Ice& to_copy)
{
	*this = to_copy;
}

Ice::~Ice()
{
	
}

AMateria*	Ice::clone() const
{
	Ice*	temp = new Ice();

	*temp = *this;
	return (temp);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice& Ice::operator=(const Ice& to_assign)
{
	if (this != &to_assign)
	{
	}
	return (*this);
}
