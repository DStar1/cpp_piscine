/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 14:31:06 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/23 16:05:31 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H_
# define WEAPON_H_

#include <string>
#include <iostream>

class Weapon {
    public:
        Weapon(std::string s);
        ~Weapon(void);
        // void attack();
		std::string 		type;
		std::string const 	&getType();
		void				 setType(std::string s);
};


#endif
