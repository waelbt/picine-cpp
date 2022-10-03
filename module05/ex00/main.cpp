/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:32:14 by waboutzo          #+#    #+#             */
/*   Updated: 2022/10/03 18:47:44 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat bureaucrat("bob", 5);
		bureaucrat.increment_grade();
		std::cout << bureaucrat << std::endl;
		bureaucrat.decrement_grade();
		std::cout << bureaucrat << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException & e){
		std::cout << e.what() << std::endl;}
	catch (Bureaucrat::GradeTooHighException & e){
		std::cout << e.what() << std::endl;}
	return 0;
}