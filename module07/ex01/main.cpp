/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:17:26 by waboutzo          #+#    #+#             */
/*   Updated: 2022/10/21 12:33:06 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

class Awesome
{
    public:
    	Awesome( void ) : _n( 42 ) { return; }
  		int get( void ) const { return this->_n; }
    private:
    	int _n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

int main() {
    int tab[] = { 0, 1, 2, 3, 4 }; 
	Awesome tab2[5];

    iter(tab, 5, print);
    iter(tab2, 5, print);
    return 0;
}