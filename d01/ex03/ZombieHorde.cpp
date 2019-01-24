/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 19:49:50 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/23 17:16:27 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"
#include <time.h>

ZombieHorde::ZombieHorde(int num) : n(num) {
    int i;
    this->horde = new Zombie[num];
    srand(time(0));
    for (int j = 0; j < this->n; j++) {
        i = rand() % 8;
        std::string name[8] = {"Hel","Hevan","Perg","Chill", "Cig", "Psych", "Lol", "Creed"};
        this->horde[j].name = name[i];
        this->horde[j].type = "Stupid";
    }
}

ZombieHorde::~ZombieHorde(void){
    delete [] this->horde;
}

void ZombieHorde::announce(){
    for (int j = 0; j < this->n; j++) {
        this->horde[j].announce();
    }
}
