/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 16:15:55 by waboutzo          #+#    #+#             */
/*   Updated: 2022/10/29 10:47:44 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP


#include <vector>
#include <stack>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <sstream>
#include <array>


template <typename T>
void easyfind(const T& c, int find)
{
    if ((std::find(c.begin(), c.end(), find)) == c.end())
        throw (find);
    std::cout << "the second parameter " << find <<  " exist in the first parameter" <<  std::endl;
}

#endif