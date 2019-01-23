/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 19:49:55 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/21 22:07:19 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_H_
# define ZOMBIE_EVENT_H_

#include <string>
#include <iostream>
#include "Zombie.hpp"

class ZombieEvent {
    public:
		ZombieEvent(std::string n, std::string t); 
		~ZombieEvent(void);

        void setZombieType(std::string t);
        Zombie *newZombie(std::string name);
        Zombie *randomChump();
        
        std::string  type;
};


#endif