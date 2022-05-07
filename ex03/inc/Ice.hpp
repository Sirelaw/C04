#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include <string>

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	~Ice();
	Ice(const Ice& to_copy);
	AMateria* clone() const;
	void use(ICharacter& target);
	Ice& operator=(const Ice& to_assign);
};

#endif