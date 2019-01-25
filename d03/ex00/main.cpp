/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 19:54:34 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/25 15:34:08 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap frag = FragTrap("Yo");
    frag.rangedAttack("Poop");
    frag.meleeAttack("you");
    frag.vaulthunter_dot_exe("you");
    frag.takeDamage(50);
    frag.vaulthunter_dot_exe("you");
    frag.vaulthunter_dot_exe("you");
    frag.vaulthunter_dot_exe("you");
    frag.vaulthunter_dot_exe("you");
    return (0);
}