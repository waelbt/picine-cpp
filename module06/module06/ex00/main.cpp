/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:28:39 by waboutzo          #+#    #+#             */
/*   Updated: 2022/11/02 17:13:27 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cctype>

int fraction_part(double number)
{
	double tmp = number;

	if(tmp == static_cast<long>(number))
		return 0;
	return 1;
}


int main(int argc, char **argv)
{
	std::string test(argv[1]);
	double tmp;
	char	c;

	tmp = std::stod(test);
	c = static_cast<char>(tmp);
	std::cout << "double value  " << tmp;
	if (!fraction_part(tmp))
		std::cout << ".0";
	std::cout << std::endl;
	std::cout << "flaot value  " << static_cast<float>(tmp);
	if (!fraction_part(tmp))
		std::cout << ".0f";
	else
		std::cout << "f";
	std::cout << std::endl;
	std::cout << "int value  " << static_cast<int>(tmp) << std::endl;
	std::cout << "char value  ";
	if(isprint(c))
		std::cout << c;
	else
		std::cout << "Non displayable";
	std::cout << std::endl;
	return 0;
}