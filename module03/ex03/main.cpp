/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:18:47 by waboutzo          #+#    #+#             */
/*   Updated: 2022/09/24 18:51:26 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

int main(void)
{
	FragTrap Tonny("Tonny");
	FragTrap pepper("pepper");

	Tonny.attack("pepper");
	pepper.takeDamage(30);
	pepper.beRepaired(30);
	return 0;
}