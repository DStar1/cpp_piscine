/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 23:11:17 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/22 23:49:31 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_H_
# define ZOMBIE_HORDE_H_

#include <string>
#include <iostream>
#include "Zombie.hpp"

class ZombieHorde {
    public:
		ZombieHorde(int n); 
		~ZombieHorde(void);

        int  n;
        Zombie *horde;

        void announce(void);
        void getN(void);  
    // private:

};


#endif