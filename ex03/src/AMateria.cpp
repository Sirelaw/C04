#include "../inc/AMateria.hpp"

AMateria::AMateria()
	:_type("Matter")
{
	std::cout << "Default AMateria: What type would you make?" << std::endl;
}

AMateria::AMateria(const AMateria& to_copy)
{
	*this = to_copy;
}

AMateria::~AMateria()
{
	
}

AMateria& AMateria::operator=(const AMateria& to_assign)
{
	if (this != &to_assign)
	{
		
	}
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (_type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "* this is just a placeholder " << target.getName() << " *" << std::endl;
}