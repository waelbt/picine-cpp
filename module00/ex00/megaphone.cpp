/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 22:15:10 by waboutzo          #+#    #+#             */
/*   Updated: 2022/09/13 16:04:47 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	*str_toupper(char *str)
{
	for (int i = 0; str[i]; i++)
	{
		if (islower(str[i]))
			str[i] = toupper(str[i]);
	}
	return (str);
}

int	main(int argc, char **argv)
{
	if(argc > 1)
	{
		for(int i = 1; i < argc; i++)
			std::cout << str_toupper(argv[i]);
		std::cout << std::endl;
	}
	return (0);
}