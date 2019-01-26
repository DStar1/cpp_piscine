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

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <ctime>

FragTrap::FragTrap(std::string n)
{
    srand(time(0));
    ClapTrap::setStats(100, 100, 100, 100, 1, n, 30, 20, 5);
    std::cout << "FR4G-TP <" << this->name << "> contructor called!!!" << std::endl;
}

FragTrap::FragTrap(void)
{
    srand(time(0));
    ClapTrap::setStats(100, 100, 100, 100, 1, "No name", 30, 20, 5);
    std::cout << "FR4G-TP <" << "No name" << "> contructor called!!!" << std::endl;
}

FragTrap::FragTrap(FragTrap &frag)
{
    srand(time(0));
    *this = frag;
    std::cout << "FR4G-TP <" << this->name << "> copy contructor called!!!" << std::endl;
}


FragTrap::~FragTrap(void){
    std::cout << "FR4G-TP <" << this->name << "> destructor called!!!" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &r){
    if (this != &r){
        ClapTrap::operator=(r);
        std::cout << "FR4G-TP <" << this->name << "> assigninging operator!!!" << std::endl;
    } 
    return (*this);
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
    if (ClapTrap::getEP() >= 25) {
        ClapTrap::setEP(ClapTrap::getEP() - 25 < 0 ? 0 : ClapTrap::getEP() - 25);
        (this->*ptr[i])(target);
    }
    else
        std::cout << "FR4G-TP <" << this->name << ">cannot use magic attack on <" << target << ">. <" << ClapTrap::getEP() << "> energy points left." << std::endl;
}

void FragTrap::pinch(std::string const & target){
    int damage = (10 - ClapTrap::getArmDamRed()) < 0 ? 0 : (10 - ClapTrap::getArmDamRed());
    std::cout << "FR4G-TP <" << this->name << ">pinches <" << target << ">, causing <" << damage << "> points of damage !" << std::endl;
}

void FragTrap::slap(std::string const & target){
    int damage = (15 - ClapTrap::getArmDamRed()) < 0 ? 0 : (15 - ClapTrap::getArmDamRed());
    std::cout << "FR4G-TP <" << this->name << ">slaps <" << target << ">, causing <" << damage << "> points of damage !" << std::endl;
}

void FragTrap::runAway(std::string const & target){
    std::cout << "FR4G-TP <" << this->name << ">runs away from <" << target << ">, causing <" << 0 << "> points of damage !" << std::endl;
}

void FragTrap::hulkSmash(std::string const & target){
    int damage = (100 - ClapTrap::getArmDamRed()) < 0 ? 0 : (100 - ClapTrap::getArmDamRed());
    std::cout << "FR4G-TP <" << this->name << ">hulk smashes <" << target << ">, causing a whopping <" << damage << "> points of damage !" << std::endl;
}

void FragTrap::throwCookies(std::string const & target){
    int damage = (5 - ClapTrap::getArmDamRed()) < 0 ? 0 : (5 - ClapTrap::getArmDamRed());
    std::cout << "FR4G-TP <" << this->name << ">throws cookies at <" << target << "> at range, causing <" << damage << "> points of damage !" << std::endl;
}