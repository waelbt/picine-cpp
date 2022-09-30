/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 19:10:58 by waboutzo          #+#    #+#             */
/*   Updated: 2022/09/30 19:48:13 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("hamid"), _materia_count(0)
{	
	std::cout << "Default Character constructor called" << std::endl;
}

Character::Character(std::string const& name) : _name(name), _materia_count(0)
{
	std::cout << "Character name constructor called" << std::endl;
}

Character::Character(Character const& obj)
{
	std::cout << "Character Copy constructor called" << std::endl;
	*this = obj;
}

Character& Character::operator=(Character const& obj)
{
	std::cout << "Character Copy assignment operator called" << std::endl;	
	if(_AMteria)
	{
		for(int i; i < _materia_count; i++)
			delete _AMteria[i];
	}
	if (obj._AMteria)
	{
		for(int i; i < obj._materia_count; i++)
			_AMteria[i] = obj._AMteria[i]->clone();
	}
	_materia_count = obj._materia_count;
	_name = obj._name;
	return (*this);
}

std::string const & Character::getName() const
{
	return _name;
}

void Character::equip(AMateria* m)
{
	
}

void Character::unequip(int idx)
{
	
}

void Character::use(int idx, ICharacter& target)
{
	
}

Character::~Character()
{
	std::cout << "Character Destructor called" << std::endl;
	for(int i; i <_materia_count; i++)
		delete _AMteria[i];
}
