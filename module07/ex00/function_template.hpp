/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function_template.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:45:51 by waboutzo          #+#    #+#             */
/*   Updated: 2022/10/19 17:01:37 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTION_TEMPLATE_HPP
#define FUNCTION_TEMPLATE_HPP


#include <iostream>

template <typename T>
void swap(T& x, T&y)
{
	T tmp;

	tmp = x;
	x = y;
	y = tmp;
}

template <typename T>
T& max(T& x, T&y)
{
	return (x > y) ? x : y;
}

template <typename T>
T& min(T& x, T&y)
{
	return (x < y) ? x : y;
}

#endif