/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 18:16:12 by waboutzo          #+#    #+#             */
/*   Updated: 2022/09/30 18:58:37 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	std::cout << "Default Cure constructor called" << std::endl;
	_type = "cure";
}

Cure::Cure(Cure const& obj)
{
	std::cout << "Cure Copy constructor called" << std::endl;
	*this = obj;
}

Cure& Cure::operator=(Cure const& obj)
{
	std::cout << "Cure Copy assignment operator called" << std::endl;
	(void) obj;
	return (*this);
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

Cure::~Cure()
{
	std::cout << "Cure Destructor called" << std::endl;
}