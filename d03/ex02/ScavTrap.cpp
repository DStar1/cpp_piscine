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
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <ctime>

ScavTrap::ScavTrap(std::string n)
{
    srand(time(0));
    ClapTrap::setStats(100, 100, 50, 50, 1, n, 20, 15, 3);
    std::cout << "SC4V-TP <" << this->name << "> constructor called!!!" << std::endl;
}

ScavTrap::ScavTrap(void)
{
    srand(time(0));
    ClapTrap::setStats(100, 100, 50, 50, 1, "SC4V-TP", 20, 15, 3);
    std::cout << "SC4V-TP <" << this->name << "> constructor called!!!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &scav)
{
    srand(time(0));
    *this = scav;
    std::cout << "SC4V-TP <" << this->name << "> copy contructor called!!!" << std::endl;
}

ScavTrap::~ScavTrap(void){
    std::cout << "SC4V-TP <" << this->name << "> destructor called!!!" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &r){
    if (this != &r){
        ClapTrap::operator=(r);
        std::cout << "SC4V-TP <" << this->name << "> assigninging operator!!!" << std::endl;
    }
    return (*this);
}

void ScavTrap::challengeNewcomer(void){
    int i = rand() % 5;
    std::string challenges[5] = {
        "walk on the moon, backwards!",
        "hike and intense conversation about what makes up reality!",
        "deep meditation while dolphins squirt water on our faces!",
        "skydiving competition while larping!",
        "jello eating competition where the jellow is actually made of lion king grub!"
    };
    std::cout << "SC4V-TP <" << this->name << "> challenges you to a " << challenges[i] << std::endl;
}
