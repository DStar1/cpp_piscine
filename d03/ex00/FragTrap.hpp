/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 19:49:55 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/21 21:05:05 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H_
# define FRAGTRAP_H_

#include <string>
#include <iostream>

class FragTrap {
    public:
        FragTrap(std::string n);
        FragTrap(void);
        ~FragTrap(void);
        void rangedAttack(std::string const & target);
        void meleeAttack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        FragTrap operator=(FragTrap const &r);

        void vaulthunter_dot_exe(std::string const & target);

        int dead(void);
        void pinch(std::string const & target);
        void slap(std::string const & target);
        void runAway(std::string const & target);
        void hulkSmash(std::string const & target);
        void throwCookies(std::string const & target);
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