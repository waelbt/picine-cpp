/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 19:10:58 by waboutzo          #+#    #+#             */
/*   Updated: 2022/10/01 01:15:35 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() :  _materia_count(0), _name("hamid")
{	
	std::cout << "Default Character constructor called" << std::endl;
	*_AMteria = NULL;
}

Character::Character(std::string const& name) : _materia_count(0),  _name(name)
{
	std::cout << "Character name constructor called" << std::endl;
	*_AMteria = NULL;
}

Character::Character(Character const& obj)
{
	std::cout << "Character Copy constructor called" << std::endl;
	*this = obj;
}

Character& Character::operator=(Character const& obj)
{
	std::cout << "Character Copy assignment operator called" << std::endl;	
	// if(_AMteria)
	// {
	// 	for(int i = 0; i < _materia_count; i++)
	// 		delete _AMteria[i];
	// }
	if (obj._AMteria[0])
	{
		for(int i = 0; i < obj._materia_count; i++)
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
	if (_materia_count > 3)
		return ;
	for(int i = 0;i < 4; i++)
	{
		if (!_AMteria[i])
			_AMteria[i] = m;
	}
}

void Character::unequip(int idx)
{
	if (idx < _materia_count)
	{
		_AMteria[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	(void) idx;
	(void) target;
	printf("ddd\n");	
}

void Character::garbage_collector()
{
	t_node *garbage = new t_node();
	printf("%p\n", garbage->content);
}

Character::~Character()
{
	std::cout << "Character Destructor called" << std::endl;
	// for(int i = 0; i <_materia_count; i++)
	// 	delete _AMteria[i];
}
