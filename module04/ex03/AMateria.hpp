/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 17:44:43 by waboutzo          #+#    #+#             */
/*   Updated: 2022/09/30 18:48:26 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP


# include <iostream>

class AMateria
{
	protected:
		std::string _type;
	public:
		AMateria();
		AMateria(AMateria const& obj);
		AMateria& operator=(AMateria const& obj);
		AMateria(std::string const & type);
		//[...]
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		//virtual void use(ICharacter& target);
		~AMateria();
};

#endif