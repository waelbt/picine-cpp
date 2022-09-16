/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:09:53 by waboutzo          #+#    #+#             */
/*   Updated: 2022/09/15 18:50:42 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	{
		randomChump("Foo");
		Zombie *zombie = NULL;
		zombie = newZombie("Ziiii");
		zombie->announce();
		delete(zombie);
	}
	system("leaks programe");
	return (0);
}
