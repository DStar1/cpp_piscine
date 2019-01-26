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
#include <ctime>

FragTrap::FragTrap(std::string n) :
        hitPoints(100),
        maxHitPoints(100),
        energyPoints(100),
        maxEnergyPoints(100),
        level(1),
        name(n),
        meleeAttackDamage(30),
        rangedAttackDamage(20),
        armorDamageReduction(5) 
{
    srand(time(0));
    std::cout << "FR4G-TP <" << name << "> contructor called!!!" << std::endl;
}

FragTrap::FragTrap(void) :
        hitPoints(100),
        maxHitPoints(100),
        energyPoints(100),
        maxEnergyPoints(100),
        level(1),
        name("No name"),
        meleeAttackDamage(30),
        rangedAttackDamage(20),
        armorDamageReduction(5) 
{
    srand(time(0));
    std::cout << "FR4G-TP <" << name << "> contructor called!!!" << std::endl;
}


FragTrap::~FragTrap(void){
    std::cout << "FR4G-TP <" << name << "> destructor called!!!" << std::endl;
}

FragTrap FragTrap::operator=(FragTrap const &r){
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

void FragTrap::rangedAttack(std::string const & target){
    if (dead())
        return;
    int damage = (rangedAttackDamage - armorDamageReduction);
    std::cout << "FR4G-TP <" << name << ">attacks <" << target << "> at range, causing <" << damage << "> points of damage !" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target){
    if (dead())
        return;
    int damage = (meleeAttackDamage - armorDamageReduction);
    std::cout << "FR4G-TP <" << name << ">attacks <" << target << "> at range, causing <" << damage << "> points of damage !" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount){
    if (dead())
        return;
    hitPoints -= amount;
    if (hitPoints <= 0)
    {
        hitPoints = 0;
        std::cout << "FR4G-TP <" << name << "> is DEAD!!!" << std::endl;
    }
}

void FragTrap::beRepaired(unsigned int amount){
    if (hitPoints < maxHitPoints)
    {
        hitPoints += amount;
        if (hitPoints > maxHitPoints)
            hitPoints = maxHitPoints;
        std::cout << "FR4G-TP <" << name << "> new health is " << hitPoints << std::endl;
    }
}

int FragTrap::dead(void){
    if (hitPoints <= 0){
        std::cout << name << " is already dead" << std::endl;
        return 1;//already dead
    }
    return 0;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target){
    int i = rand() % 5;
	void (FragTrap::*ptr[])(std::string const &) =
	{
		&FragTrap::pinch,
		&FragTrap::slap,
		&FragTrap::runAway,
		&FragTrap::hulkSmash,
		&FragTrap::throwCookies
	};
    if (energyPoints >= 25) {
        energyPoints = energyPoints - 25 < 0 ? 0 : energyPoints - 25;
        (this->*ptr[i])(target);
    }
    else
        std::cout << "FR4G-TP <" << name << ">cannot use magic attack on <" << target << ">. <" << energyPoints << "> energy points left." << std::endl;
}

void FragTrap::pinch(std::string const & target){
    int damage = (10 - armorDamageReduction) < 0 ? 0 : (10 - armorDamageReduction);
    std::cout << "FR4G-TP <" << name << ">pinches <" << target << ">, causing <" << damage << "> points of damage !" << std::endl;
}

void FragTrap::slap(std::string const & target){
    int damage = (15 - armorDamageReduction) < 0 ? 0 : (15 - armorDamageReduction);
    std::cout << "FR4G-TP <" << name << ">slaps <" << target << ">, causing <" << damage << "> points of damage !" << std::endl;
}

void FragTrap::runAway(std::string const & target){
    std::cout << "FR4G-TP <" << name << ">runs away from <" << target << ">, causing <" << 0 << "> points of damage !" << std::endl;
}

void FragTrap::hulkSmash(std::string const & target){
    int damage = (100 - armorDamageReduction) < 0 ? 0 : (100 - armorDamageReduction);
    std::cout << "FR4G-TP <" << name << ">hulk smashes <" << target << ">, causing a whopping <" << damage << "> points of damage !" << std::endl;
}

void FragTrap::throwCookies(std::string const & target){
    int damage = (5 - armorDamageReduction) < 0 ? 0 : (5 - armorDamageReduction);
    std::cout << "FR4G-TP <" << name << ">throws cookies at <" << target << "> at range, causing <" << damage << "> points of damage !" << std::endl;

}