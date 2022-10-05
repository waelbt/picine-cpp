/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 23:25:48 by waboutzo          #+#    #+#             */
/*   Updated: 2022/10/03 18:46:50 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("hamid"), _grade(1)
{
	std::cout << "Default Bureaucrat constructor called" << std::endl;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Bureaucrat Grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Bureaucrat Grade too low";
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade)
{
	std::cout << "Bureaucrat name and grade constructor called" << std::endl;
	if (_grade < 1)
		throw (GradeTooLowException());
	if (_grade > 150)
		throw (GradeTooHighException());
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj) : _name(obj._name), _grade(obj._grade)
{
	std::cout << "Bureaucrat Copy constructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj)
{
	std::cout << "Bureaucrat Copy assignment operator called" << std::endl;
	_grade = obj._grade;
	return (*this);
}

const std::string& Bureaucrat::getName() const
{
	//std::cout << "Bureaucrat getName member function called" << std::endl;
	return _name;
}

const int& Bureaucrat::getGrade() const
{
	//std::cout << "Bureaucrat getGrade member function called" << std::endl;
	return _grade;
}

void Bureaucrat::increment_grade()
{
	std::cout << "Bureaucrat increment grade member function called" << std::endl;
	if (++_grade > 150)
		throw (GradeTooHighException());
}

void Bureaucrat::decrement_grade()
{
	std::cout << "Bureaucrat decrement grade member function called" << std::endl;
	if (--_grade < 1)
		throw (GradeTooLowException());
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor called" << std::endl;
}

std::ostream& operator<<(std::ostream& o, const Bureaucrat& obj)
{
	std::cout << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
	return o;
}
