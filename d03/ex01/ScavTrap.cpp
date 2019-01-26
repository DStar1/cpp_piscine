/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 19:49:50 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/21 21:05:02 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <ctime>

ScavTrap::ScavTrap(std::string n) :
        hitPoints(100),
        maxHitPoints(100),
        energyPoints(50),
        maxEnergyPoints(50),
        level(1),
        name(n),
        meleeAttackDamage(20),
        rangedAttackDamage(15),
        armorDamageReduction(3) 
{
    srand(time(0));
    std::cout << "ST4V-TP <" << name << "> constructor called!!!" << std::endl;
}

ScavTrap::ScavTrap(void) :
        hitPoints(100),
        maxHitPoints(100),
        energyPoints(50),
        maxEnergyPoints(50),
        level(1),
        name("No name"),
        meleeAttackDamage(20),
        rangedAttackDamage(15),
        armorDamageReduction(3) 
{
    srand(time(0));
    std::cout << "ST4V-TP <" << name << "> constructor called!!!" << std::endl;
}


ScavTrap::~ScavTrap(void){
    std::cout << "ST4V-TP <" << name << "> destructor called!!!" << std::endl;
}

ScavTrap ScavTrap::operator=(ScavTrap const &r){
    if (this != &r){
        hitPoints = r.hitPoints;
        maxHitPoints = r.maxHitPoints;
        energyPoints = r.energyPoints;
        maxEnergyPoints = r.maxEnergyPoints;
        level = r.level;
        name =r.name;
        meleeAttackDamage = r.meleeAttackDamage;
        rangedAttackDamage = r.rangedAttackDamage;
        armorDamageReduction = r.armorDamageReduction;
    }
    return (*this);
}

void ScavTrap::rangedAttack(std::string const & target){
    if (dead())
        return;
    int damage = (rangedAttackDamage - armorDamageReduction);
    std::cout << "ST4V-TP <" << name << ">attacks <" << target << "> at range, causing <" << damage << "> points of damage !" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target){
    if (dead())
        return;
    int damage = (meleeAttackDamage - armorDamageReduction);
    std::cout << "ST4V-TP <" << name << ">attacks <" << target << "> at range, causing <" << damage << "> points of damage !" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount){
    if (dead())
        return;
    hitPoints -= amount;
    if (hitPoints <= 0)
    {
        hitPoints = 0;
        std::cout << "ST4V-TP <" << name << "> is DEAD!!!" << std::endl;
    }
}

void ScavTrap::beRepaired(unsigned int amount){
    if (hitPoints < maxHitPoints)
    {
        hitPoints += amount;
        if (hitPoints > maxHitPoints)
            hitPoints = maxHitPoints;
        std::cout << "ST4V-TP <" << name << "> new health is " << hitPoints << std::endl;
    }
}

int ScavTrap::dead(void){
    if (hitPoints <= 0){
        std::cout << "ST4V-TP <" << name << "> is already dead" << std::endl;
        return 1;//already dead
    }
    return 0;
}

void ScavTrap::challengNewcomer(std::string const & target){
    int i = rand() % 5;
    std::string challenges[5] = {
        "walk on the moon, backwards!",
        "hike and intense conversation about what makes up reality!",
        "deep meditation while dolphins squirt water on our faces!",
        "skydiving competition while larping!",
        "jello eating competition where the jellow is actually made of lion king grub!"
    };
    std::cout << "ST4V-TP <" << name << "> challenges <" << target << "> to a " << challenges[i] << std::endl;
}
