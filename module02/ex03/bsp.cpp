/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:25:15 by waboutzo          #+#    #+#             */
/*   Updated: 2022/09/20 21:05:59 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	if(a == b || a == c || b == c)
		std::cerr << "it's not a triangle -_-" << std::endl;
	else if (Point::area(a, b, c) == (Point::area(point, b, c) + Point::area(a, point, c) + Point::area(a, b, point)))
		return true;
	return false;
}
