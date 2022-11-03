/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:12:51 by waboutzo          #+#    #+#             */
/*   Updated: 2022/11/04 00:04:13 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cctype>
#include <sstream>


int main(int argc, char **argv)
{
	if(argc != 2)
		return 0;
	std::stringstream test(argv[1]);
	double tmp;
	char	c;

	test >> tmp;
	std::cout.flags(std::ios::fixed);
	c = static_cast<char>(tmp);
	std::cout << std::setprecision(1) << "double value  " << tmp << std::endl;
	std::cout << "flaot value  " << static_cast<float>(tmp) << "f" << std::endl;
	std::cout << "int value  " << static_cast<int>(tmp) << std::endl;
	std::cout << "char value  ";
	if(isprint(c))
		std::cout << c;
	else
		std::cout << "Non displayable";
	std::cout << std::endl;
	return 0;
}