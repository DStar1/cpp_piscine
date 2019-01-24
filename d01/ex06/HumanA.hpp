/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 14:35:55 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/23 16:22:58 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H_
# define HUMANA_H_

#include <string>
#include <iostream>
#include "Weapon.hpp"


class HumanA {
    public:
        HumanA(std::string s, Weapon &w);
        ~HumanA(void);

		std::string 		name;
		Weapon &wep;
        void attack();
};

#endif
