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
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap(std::string n);
        FragTrap(FragTrap &obj);
        FragTrap(void);
        ~FragTrap(void);
        FragTrap &operator=(FragTrap const &r);

        void vaulthunter_dot_exe(std::string const & target);

        void pinch(std::string const & target);
        void slap(std::string const & target);
        void runAway(std::string const & target);
        void hulkSmash(std::string const & target);
        void throwCookies(std::string const & target);
};


#endif