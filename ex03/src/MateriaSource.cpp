#include "../inc/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_copied_materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& to_copy)
{
	for (int i = 0; i < 4; i++)
		_copied_materias[i] = NULL;
	*this = to_copy;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (_copied_materias[i])
		{
			delete _copied_materias[i];
			_copied_materias[i] = NULL;
		}
	}
	std::cout << "* All active Materia in MateriaSource destroyed" << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& to_assign)
{
	if (this != &to_assign)
	{
		for (int i = 0; i < 4; i++)
		{
			if (_copied_materias[i])
				delete _copied_materias[i];
			_copied_materias[i] = NULL;
		}
		for (int i = 0; i < 4; i++){
			if (to_assign._copied_materias[i])
				_copied_materias[i] = to_assign._copied_materias[i]->clone();
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* matter)
{
	std::cout << "* Called learnMateria * " << matter->getType() << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_copied_materias[i] == NULL)
		{
			_copied_materias[i] = matter->clone();
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	std::cout << "* Called createMateria *" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_copied_materias[i])
		{
			if ((_copied_materias[i]->getType() == type) && (type == "ice"))
				return (new Ice());
			if ((_copied_materias[i]->getType() == type) && (type == "cure"))
				return (new Cure());
		}
	}
	return (NULL);
}