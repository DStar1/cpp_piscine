/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 14:36:14 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/23 16:05:47 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string s) : type(s)
{
	return;
}

Weapon::~Weapon(void) 
{
	return;
}

std::string const &Weapon::getType()
{
	return (this->type);
}

void		Weapon::setType(std::string input)
{
	this->type = input;
}
