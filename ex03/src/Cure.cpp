#include "../inc/Cure.hpp"

Cure::Cure()
{
	_type = "cure";
	std::cout << "* Cure constructing. *" << std::endl;
}

Cure::Cure(const Cure& to_copy)
{
	*this = to_copy;
}

Cure::~Cure()
{
	
}

AMateria*	Cure::clone() const
{
	Cure*	temp = new Cure();

	*temp = *this;
	return (temp);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure& Cure::operator=(const Cure& to_assign)
{
	if (this != &to_assign)
	{
	}
	return (*this);
}
