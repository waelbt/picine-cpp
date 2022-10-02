/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 19:23:30 by waboutzo          #+#    #+#             */
/*   Updated: 2022/10/02 17:09:20 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

#include "AMateria.hpp"

Character::Character() : _name("hamid"), _counter(0)
{
	for(int i = 0; i < 4;  i++)
		_materia[i] = NULL;
}

Character::Character(std::string const& name) : _name(name) , _counter(0)
{
	for(int i = 0; i < 4;  i++)
		_materia[i] = NULL;
}

Character::Character(Character const& obj)
{
	*this = obj;
}

Character& Character::operator=(Character const& obj)
{
	for(int i = 0; i < 4;  i++)
		if(_materia[i])
			delete _materia[i];
	for(int i = 0; i < 4;  i++)
		_materia[i] = obj._materia[i]->clone();
	_counter = obj._counter;
	_name = obj._name;
	return (*this);
}

std::string const & Character::getName() const
{
	return _name;
}

void Character::equip(AMateria* m)
{
	for(int i = 0; i < 4; i++)
	{
		if(!_materia[i])
		{
			_counter++;
			_materia[i] = m;
			break ;
		}
	}
}

void Character::unequip(int idx)
{
	if(idx < _counter)
	{
		_materia[idx] = NULL;
		_counter--;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if(idx < _counter && _materia[idx])
		_materia[idx]->use(target);
	else
		std::cout << "* invlaid material *" << std::endl;
}

Character::~Character()
{
	for(int i = 0; i < 4;  i++)
		if(_materia[i])
			delete _materia[i];
}
