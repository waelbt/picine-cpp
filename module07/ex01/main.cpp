/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:17:26 by waboutzo          #+#    #+#             */
/*   Updated: 2022/10/20 17:04:20 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

int main(void)
{
	{
		int ar[5] = {16, 2, 77, 40, 233};

		Iter<int>(ar, 5, &f<int>);
		for(int i = 0; i < 5; i++)
			std::cout << ar[i] <<", ";
		std::cout << std::endl;
	}
	{
		double ar[5] = {16.3, 2.0, 77.3, 40.44, 233.55};

		Iter<double>(ar, 5, &f<double>);
		for(int i = 0; i < 5; i++)
			std::cout << ar[i] <<", ";
		std::cout << std::endl;
	}
	return 0;
}