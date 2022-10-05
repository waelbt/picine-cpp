/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:38:00 by waboutzo          #+#    #+#             */
/*   Updated: 2022/10/05 17:42:31 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("hamid") , _grade(150)
{
	std::cout << "Bureaucrat Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const& name, const int& grade) : _name(name) , _grade(grade)
{
	if (_grade < 1)
		throw GradeTooHighException();
	if (_grade > 150)
		throw GradeTooLowException();
	std::cout << "Bureaucrat name and grade constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const& obj) : _name(obj._name), _grade(obj._grade)
{
	std::cout << "Bureaucrat Copy constructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& obj)
{
	_grade = obj._grade;
	std::cout << "Bureaucrat Copy assignment operator called" << std::endl;
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

void Bureaucrat::IncrementGrade()
{
	std::cout << "Bureaucrat IncrementGrade member function called" << std::endl;
	if (--_grade < 1)
		throw (GradeTooHighException());
}

void Bureaucrat::DecrementGrade()
{
	std::cout << "Bureaucrat DecrementGrade member function called" << std::endl;
	if (++_grade > 150)
		throw (GradeTooLowException());
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return "* Bureaucrat: Grade Too High Exception *";
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return "* Bureaucrat: Grade Too Low Exception *";
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor called" << std::endl;
}

void Bureaucrat::signForm(Form const& form)
{
	if (form.getStatus() == true)
		std::cout << "* " << _name << " signed " << form.getName() << " *" << std::endl;
	else
		std::cout << "* " << _name << " couldn’t sign " << form.getName() << "because "<< GradeTooLowException().what() << std::endl;
}

std::ostream& operator<<(std::ostream& o, Bureaucrat const& obj)
{
	o << obj.getName() <<" bureaucrat grade " << obj.getGrade() << "." << std::endl;
	return o;
}