/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 12:20:17 by ryusupov          #+#    #+#             */
/*   Updated: 2024/11/16 14:07:24 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <string>
#include <iostream>

class Weapon{
	private:
		std::string type;
	public:
		Weapon();
		Weapon(std::string type);
		~Weapon();

		const	std::string get_type() const;
		void	set_type(std::string type);
};
#endif
