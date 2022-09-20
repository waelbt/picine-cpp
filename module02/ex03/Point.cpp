/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:26:11 by waboutzo          #+#    #+#             */
/*   Updated: 2022/09/20 15:33:33 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
}

Point::Point(float const  x, float const y) : _x(Fixed(x)),  _y(Fixed(y))
{
}

Point::Point(const Point& point)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = point;
}

const Fixed& Point::getx(void) const
{
	return _x;
}

const Fixed& Point::gety(void) const
{
	return _y;	
}

Point::~Point()
{
}