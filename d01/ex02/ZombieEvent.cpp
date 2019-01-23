/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 19:49:50 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/22 22:52:52 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(std::string n, std::string t){
    this->type = t;
    newZombie(n);
}

ZombieEvent::~ZombieEvent(void){
    std::cout << "All zombies are dead!!!!!!" << std::endl;
}

void ZombieEvent::setZombieType(std::string t){
    this->type = t;
    std::cout << "Zombie type is " << this->type << std::endl;
}

Zombie *ZombieEvent::newZombie(std::string name){
    Zombie *new_zombie = new Zombie(name, this->type);
    return new_zombie;
}

Zombie *ZombieEvent::randomChump(){
    int i = rand() % 4;
    std::string name[4] = {"Hel","Hevan","Perg","Chill"};
    Zombie *new_zombie = new Zombie(name[i], this->type);
    return new_zombie;
}