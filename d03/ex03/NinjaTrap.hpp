/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 19:49:55 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/21 21:05:05 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_H_
# define NINJATRAP_H_

#include <string>
#include <iostream>
#include "NinjaTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

class NinjaTrap : public ClapTrap
{
    public:
        NinjaTrap(std::string n);
        NinjaTrap(NinjaTrap &ninj);
        NinjaTrap(void);
        ~NinjaTrap(void);
        NinjaTrap &operator=(NinjaTrap const &r);

		void	ninjaShoeBox(ClapTrap &obj);
		void	ninjaShoeBox(FragTrap &obj);
		void	ninjaShoeBox(NinjaTrap &obj);
		void	ninjaShoeBox(ScavTrap &obj);
};


#endif