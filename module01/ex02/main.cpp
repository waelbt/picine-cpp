/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:03:02 by waboutzo          #+#    #+#             */
/*   Updated: 2022/09/15 18:52:06 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str("HI THIS BRAIN");
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "addresses :" << std::endl;
	std::cout << "string addrees: "<< &str << std::endl;
	std::cout << "pointer address: " << stringPTR << std::endl;
	std::cout << "reference address: "<< &stringREF << std::endl;

	std::cout << "\nvalues :" << std::endl;
	std::cout << "string value: "<< str << std::endl;
	std::cout << "pointer value: " << *stringPTR << std::endl;
	std::cout << "reference value: "<< stringREF << std::endl;
}