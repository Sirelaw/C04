#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class AMateria
{
protected:
	std::string	_type;
	AMateria(); 
public:
	AMateria(const AMateria& to_copy);
	virtual ~AMateria();
	virtual AMateria& operator=(const AMateria& to_assign);
	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};


#endif
