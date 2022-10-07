/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:09:14 by waboutzo          #+#    #+#             */
/*   Updated: 2022/10/07 17:33:58 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern Default constructor called" << std::endl;
}

Intern::Intern(Intern const& obj)
{
	std::cout << "Intern Copy constructor called" << std::endl;
	*this = obj;
}

Form* Intern::makeForm(std::string form, std::string target)
{
	std::cout << "Intern makeForm member function called" << std::endl;
	Form *obj = NULL;
	if (!form.compare("presidential pardon"))
		obj = new PresidentialPardonForm(target);
	else if (!form.compare("robotomy request"))
		obj = new RobotomyRequestForm(target);
	else if (!form.compare("shrubbery creation"))
		obj = new ShrubberyCreationForm(target);
	else
		std::cout << "name passed as parameter doesn’t exist" << std::endl;
	return (obj);
}

Intern& Intern::operator=(Intern const& obj)
{
	std::cout << "Intern Copy assignment operator called" << std::endl;
	(void) obj;
	return (*this);
}

Intern::~Intern()
{
	std::cout << "Intern Destructor called" << std::endl;
}