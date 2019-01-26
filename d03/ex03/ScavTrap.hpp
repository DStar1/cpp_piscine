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
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    public:
        ScavTrap(std::string n);
        ScavTrap(ScavTrap &scav);
        ScavTrap(void);
        ~ScavTrap(void);

        ScavTrap &operator=(ScavTrap const &r);
        void challengeNewcomer(void);
        int dead(void);
};


#endif