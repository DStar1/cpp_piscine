/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 19:49:50 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/21 21:05:02 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"
#include <ctime>

NinjaTrap::NinjaTrap(std::string n)
{
    srand(time(0));
    ClapTrap::setStats(60, 60, 120, 120, 1, n, 60, 5, 0);
    std::cout << "N1NJ-TP <" << this->name << "> contructor called!!!" << std::endl;
}

NinjaTrap::NinjaTrap(void)
{
    srand(time(0));
    ClapTrap::setStats(60, 60, 120, 120, 1, "No name", 60, 5, 0);
    std::cout << "N1NJ-TP <" << "No name" << "> contructor called!!!" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap &ninj)
{
    srand(time(0));
    *this = ninj;
    std::cout << "N1NJ-TP <" << this->name << "> copy contructor called!!!" << std::endl;
}


NinjaTrap::~NinjaTrap(void){
    std::cout << "N1NJ-TP <" << this->name << "> destructor called!!!" << std::endl;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &r){
    if (this != &r){
        ClapTrap::operator=(r);
        std::cout << "N1NJ-TP <" << this->name << "> assigninging operator!!!" << std::endl;
    } 
    return (*this);
}

void	NinjaTrap::ninjaShoeBox(ClapTrap &obj) {
    std::cout << "N1NJ-TP <" << this->name << "> I see you <" << obj.name << "> clap! -_-" << std::endl;
}

void	NinjaTrap::ninjaShoeBox(FragTrap &obj) {
    std::cout << "N1NJ-TP <" << this->name << "> I see you <" << obj.name << "> frag! -_-" << std::endl;
}

void	NinjaTrap::ninjaShoeBox(NinjaTrap &obj) {
    std::cout << "N1NJ-TP <" << this->name << "> I see you <" << obj.name << "> ninja! -_-" << std::endl;
}

void	NinjaTrap::ninjaShoeBox(ScavTrap &obj) {
    std::cout << "N1NJ-TP <" << this->name << "> I see you <" << obj.name << "> scrav! -_-" << std::endl;
}
