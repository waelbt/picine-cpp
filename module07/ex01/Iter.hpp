/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:17:22 by waboutzo          #+#    #+#             */
/*   Updated: 2022/10/20 16:53:38 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void Iter(T* ar, size_t len, void (*f) (T&))
{
	for(size_t i = 0; i < len; i++)
		f(ar[i]);
}

template <typename T>
void f(T& n)
{
	n += 13;
}

#endif