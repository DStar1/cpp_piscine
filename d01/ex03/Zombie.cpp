/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 19:49:50 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/22 23:49:19 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    return;
}

Zombie::~Zombie(void)
{
    std::cout << "Bye bye Zombie! Good riddance!" << std::endl;
}

void Zombie::announce() {
    std::cout << "<" << this->name << " (" << this->type << ")> Braiiiiiiinnnssss.." << std::endl;
}