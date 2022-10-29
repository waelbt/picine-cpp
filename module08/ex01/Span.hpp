/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 16:15:55 by waboutzo          #+#    #+#             */
/*   Updated: 2022/10/29 11:03:10 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Span
{
    private:
        unsigned int _N;
    public:
        Span();
        Span(unsigned int N);
        Span(const Span& obj);
        Span& operator=(const Span& obj);
        void addNumber(int number);
        int shortestSpan();
        int longestSpan();
        /*dont forget to add the last methode*/
        ~Span();
}