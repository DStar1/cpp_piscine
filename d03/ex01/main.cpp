/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 19:54:34 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/25 16:09:30 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap clap = ScavTrap("Yo");
    clap.rangedAttack("Poop");
    clap.meleeAttack("you");
    clap.takeDamage(50);
    clap.challengNewcomer("you");
    clap.challengNewcomer("you");
    clap.challengNewcomer("you");
    clap.challengNewcomer("you");
    clap.challengNewcomer("you");

    return (0);
}