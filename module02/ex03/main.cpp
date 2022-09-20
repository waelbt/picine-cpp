/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 22:44:26 by waboutzo          #+#    #+#             */
/*   Updated: 2022/09/20 15:21:14 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void)
{
	Point point(2.5, 3.1);
	Point p(point);
	std::cout << p.getx() << std::endl;
	std::cout << p.gety() << std::endl;
	return (0);
}