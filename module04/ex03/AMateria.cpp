/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 17:46:52 by waboutzo          #+#    #+#             */
/*   Updated: 2022/10/01 16:45:06 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "Default AMateria constructor called" << std::endl;
}

AMateria::AMateria(AMateria const& obj)
{
	std::cout << "AMateria Copy constructor called" << std::endl;
	*this = obj;
}

AMateria& AMateria::operator=(AMateria const& obj)
{
	std::cout << "AMateria Copy assignment operator called" << std::endl;
	(void) obj;
	return (*this);
}

AMateria::AMateria(std::string const & type) : _type(type) {}

std::string const & AMateria::getType() const
{
	return _type;
}

void AMateria::use(ICharacter& target)
{
	(void) target;
	printf("ddddd\n");
}

AMateria::~AMateria()
{
	std::cout << "AMateria Destructor called" << std::endl;
}