/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 19:49:50 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/21 21:05:02 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string n)
{
    hitPoints(100);
    maxHitPoints(100);
    energyPoints(100);
    maxEnergyPoints(100);
    level(1);
    name(n);
    meleeAttackDamage(30);
    rangedAttackDamage(20);
    armorDamageReduction(5);
}
// void FragTrap::setMagic(std::string magic){
//     this->magic_power = magic;
// }
// void FragTrap::setNumTeeth(int num_teeth){
//     this->num_of_teeth = num_teeth;
// }
// std::string FragTrap::getSpecies(void){
//     return this->species_type;
// }
// std::string FragTrap::getMagic(void){
//     return this->magic_power;
// }
// int FragTrap::getNumTeeth(void){
//     return this->num_of_teeth;
// }