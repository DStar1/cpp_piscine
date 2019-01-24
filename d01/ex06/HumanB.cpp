/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 14:35:52 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/23 16:27:27 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string s) : name(s)
{
	return;
}

HumanB::~HumanB(void) 
{
	return;
}

void	HumanB::setWeapon(Weapon& w)
{
	this->wep = &w;
	return;
}

void	HumanB::attack()
{
	std::cout << this->name << " attacks with his " << this->wep->getType() << std::endl;
	return;
}
