/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:18:47 by waboutzo          #+#    #+#             */
/*   Updated: 2022/09/24 15:57:13 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include "ScavTrap.hpp"

/*tarnaj3 l had l main*/

int main(void)
{
	ScavTrap Tonny("Tonny");
	ClapTrap beepper("Beepper");

	Tonny.attack("Beepper");
	beepper.takeDamage(20);
	beepper.beRepaired(20);
	Tonny.guardGate();
	beepper.attack("tonny");
	Tonny.takeDamage(20);
	Tonny.attack("Beepper");
	beepper.takeDamage(20);
	Tonny.attack("Beepper");
	beepper.takeDamage(20);
	Tonny.attack("Beepper");
	beepper.takeDamage(20);
	return 0;
}