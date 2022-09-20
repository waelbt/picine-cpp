/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:21:12 by waboutzo          #+#    #+#             */
/*   Updated: 2022/09/20 15:31:13 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_CPP
#define POINT_CPP

#include "Fixed.hpp"

class Point
{
	private:
		Fixed const _x;
		Fixed const _y;
	public:
		Point();
		Point(float const  x, float const y);
		Point(const Point& point);
		const Fixed& getx(void) const;
		const Fixed& gety(void) const;
		~Point();
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif