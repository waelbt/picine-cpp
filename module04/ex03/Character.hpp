/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 19:08:10 by waboutzo          #+#    #+#             */
/*   Updated: 2022/10/01 01:14:57 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"


typedef struct s_node
{
	void *content;
	struct s_node *next;
}t_node;

class Character: public ICharacter
{
	private:
		int _materia_count;
		AMateria *_AMteria[4];
		std::string _name;
	public:
		Character();
		Character(Character const& obj);
		Character(std::string const& name);
		Character& operator=(Character const& obj);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		static void garbage_collector();
		~Character();
};

#endif