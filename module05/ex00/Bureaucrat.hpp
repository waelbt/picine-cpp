/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:27:02 by waboutzo          #+#    #+#             */
/*   Updated: 2022/10/05 15:52:02 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	private:
		std::string const _name;
		int _grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string const& name, const int& grade);
		Bureaucrat(Bureaucrat const& obj);
		Bureaucrat& operator=(Bureaucrat const& obj);
		const std::string& getName() const;
		const int& getGrade() const;
		void IncrementGrade();
		void DecrementGrade();
		class GradeTooHighException : public std::exception
		{	public:
				virtual const char * what() const throw();};
		class GradeTooLowException : public std::exception
		{	public:
				virtual const char * what() const throw();};
		~Bureaucrat();
};

std::ostream& operator<<(std::ostream const& o, Bureaucrat const& obj);

#endif