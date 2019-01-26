/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 19:49:55 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/21 21:05:05 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H_
# define SCAVTRAP_H_

#include <string>
#include <iostream>

class ScavTrap {
    public:
        ScavTrap(std::string n);
        ScavTrap(void);
        ~ScavTrap(void);
        void rangedAttack(std::string const & target);
        void meleeAttack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        ScavTrap operator=(ScavTrap const &r);

        void challengNewcomer(std::string const & target);

        int dead(void);
    private:
        int hitPoints;
        int maxHitPoints;
        int energyPoints;
        int maxEnergyPoints;
        int level;
        std::string name;
        int meleeAttackDamage;
        int rangedAttackDamage;
        int armorDamageReduction;

};


#endif