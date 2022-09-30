/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 18:37:32 by waboutzo          #+#    #+#             */
/*   Updated: 2022/09/30 19:01:54 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "Default MateriaSource constructor called" << std::endl;
	_counter = 0;
}

MateriaSource::MateriaSource(MateriaSource const& obj)
{
	std::cout << "MateriaSource Copy constructor called" << std::endl;
	*this = obj;
}

MateriaSource& MateriaSource::operator=(MateriaSource const& obj)
{
	std::cout << "MateriaSource Copy assignment operator called" << std::endl;
	(void) obj;
	return (*this);
}

void MateriaSource::learnMateria(AMateria* obj)
{
	if (_counter < 4)
	{
		_materiaSource[_counter++] = obj->clone();
		return ;
	}
	std::cout << "the MateriaSource is full (it can know at most 4 Materias)" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < _counter; i++)
	{
		if (!_materiaSource[i]->getType().compare(type))
			return _materiaSource[i]->clone();
	}
	std::cout << "the type is unknown" << std::endl;
	return (NULL);
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource Destructor called" << std::endl;
}