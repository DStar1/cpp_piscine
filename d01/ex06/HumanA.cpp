/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 14:35:58 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/23 16:23:20 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string s, Weapon &w) : name(s), wep(w)
{
	return;
}

HumanA::~HumanA(void) 
{
	return;
}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with his " << this->wep.getType() << std::endl;
	return;
}
