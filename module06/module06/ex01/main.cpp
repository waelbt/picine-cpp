/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:35:21 by waboutzo          #+#    #+#             */
/*   Updated: 2022/10/12 17:41:45 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main(void)
{
	Data data(2, 6, 7);

	uintptr_t converted_data =  serialize(&data);
	Data *data2 = deserialize(converted_data);
	std::cout << *data2 << std::endl; 
	return 0;
}