#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include <string>

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	~Cure();
	Cure(const Cure& to_copy);
	AMateria* clone() const;
	void use(ICharacter& target);
	Cure& operator=(const Cure& to_assign);
};

#endif