/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 14:36:06 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/23 16:24:02 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H_
# define HUMANB_H_

#include <string>
#include <iostream>
#include "Weapon.hpp"


class HumanB {
    public:
        HumanB(std::string s);
        ~HumanB(void);

		Weapon 		*wep;
		std::string 		name;
        void setWeapon(Weapon &newWep);
        void attack();
};

#endif
