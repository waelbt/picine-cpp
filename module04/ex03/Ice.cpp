/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 17:58:47 by waboutzo          #+#    #+#             */
/*   Updated: 2022/09/30 18:59:30 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	std::cout << "Default Ice constructor called" << std::endl;
	_type = "ice";
}

Ice::Ice(Ice const& obj)
{
	std::cout << "Ice Copy constructor called" << std::endl;
	*this = obj;
}

Ice& Ice::operator=(Ice const& obj)
{
	std::cout << "Ice Copy assignment operator called" << std::endl;
	(void) obj;
	return (*this);
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

Ice::~Ice()
{
	std::cout << "Ice Destructor called" << std::endl;
}