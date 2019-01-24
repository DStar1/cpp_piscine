/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 14:31:06 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/23 14:40:14 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H_
# define WEAPON_H_

#include <string>
#include <iostream>

class Weapon {
    public:
        Weapon(void);
        ~Weapon(void);
        void attack();
    // private:
        std::string  name;
        std::string  type;
};


#endif
