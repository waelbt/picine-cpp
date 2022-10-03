/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 23:20:14 by waboutzo          #+#    #+#             */
/*   Updated: 2022/10/03 17:23:36 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat& obj);
		Bureaucrat& operator=(const Bureaucrat& obj);
		const std::string& getName() const;
		const int& getGrade() const;
		void increment_grade();
		void decrement_grade();
		class GradeTooHighException : public std::exception
		{	public:
				virtual const char* what() const throw();};
		class GradeTooLowException : public std::exception
		{	public:
				virtual const char* what() const throw();};
		~Bureaucrat();
};

std::ostream& operator<<(std::ostream& o, const Bureaucrat& obj);
#endif