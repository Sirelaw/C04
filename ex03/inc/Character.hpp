#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>

#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string	_name;
	AMateria*	_materias[4];
	AMateria*	_dropped[10];

public:
	Character();
	Character(std::string name);
	Character(const Character& to_copy);
	~Character();
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
	Character& operator=(const Character& to_assign);
};

#endif
