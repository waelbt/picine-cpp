/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:09:15 by waboutzo          #+#    #+#             */
/*   Updated: 2022/10/07 18:03:49 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

// class Form;
// class ShrubberyCreationForm;
// class RobotomyRequestForm;
// class PresidentialPardonForm;
class Intern
{
	public:
		Intern();
		Intern(Intern const& obj);
		Form* makeForm(std::string Formn, std::string target);
		Intern& operator=(Intern const& obj);
		class InvalidFormException : public std::exception
		{	public:
				virtual const char * what() const throw();};
		~Intern();
};

#endif
