/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:56:38 by waboutzo          #+#    #+#             */
/*   Updated: 2022/09/15 18:51:26 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	{
		Zombie *zombie;
		zombie = zombieHorde( 7, "Foo");
		for(int i = 0; i < 7; i++)
			std::cout << "zombie " << i << " named : " <<zombie[i].name_getter() << std::endl;
		delete [] zombie;
	}
	system("leaks programe");
	return (0);
}