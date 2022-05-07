#include "../inc/Character.hpp"
#include "../inc/Ice.hpp"
#include "../inc/Cure.hpp"

Character::Character(std::string name)
	: _name(name)
{
	std::cout << "* Character constructing. *" << std::endl;
	for (int i = 0; i < 4; i++)
		_materias[i] = NULL;
	for (int i = 0; i < 10; i++)
		_dropped[i] = NULL;
}

Character::Character(const Character& to_copy)
{
	std::cout << "* Character copy constructor. *" << std::endl;
	for (int i = 0; i < 4; i++)
		_materias[i] = NULL;
	for (int i = 0; i < 10; i++)
		_dropped[i] = NULL;
	_name = to_copy._name;
	*this = to_copy;
}

std::string const & Character::getName() const
{
	return(_name);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i])
			delete _materias[i];
		_materias[i] = NULL;
	}
	for (int i = 0; i < 10; i++)
	{
		if (_dropped[i])
			delete _dropped[i];
		_dropped[i] = NULL;
	}
	std::cout << _name << " * Character destroyed. *" << std::endl;
}

Character& Character::operator=(const Character& to_assign)
{
	if (this != &to_assign)
	{
		for (int i = 0; i < 4; i++)
		{
			if (_materias[i])
				delete _materias[i];
			_materias[i] = NULL;
		}
		for (int i = 0; i < 4; i++){
			if (to_assign._materias[i])
			{
				if (to_assign._name == "ice")
					_materias[i] = new Ice();
				else
					_materias[i] = new Cure();
				*(_materias[i]) = *(to_assign._materias[i]);
			}
		}
	}
	return (*this);
}

void	Character::equip(AMateria *m)
{
	int	i;

	i = 0;
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i] == NULL)
		{
			std::cout << "Equipped " << m->getType() << " in " << "Position " << i << std::endl;
			_materias[i] = m;
			break;
		}
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && _materias[idx])
		_materias[idx]->use(target);
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		for (int i = 0; i < 10; i++)
		{
			if (_dropped[i] == NULL)
			{
				_dropped[i] = _materias[idx];
				break;
			}
			else if (i == 9)
			{
				delete _dropped[0];
				for (int j = 0; j < 8; j++)
					_dropped[j] = _dropped[j + 1];
				_dropped[i] = _materias[idx];
			}
		}
		if (_materias[idx])
			std::cout << "Unequipped " << _materias[idx]->getType() << " from " << "Position " << idx << std::endl;
		_materias[idx] = NULL;
	}	
}