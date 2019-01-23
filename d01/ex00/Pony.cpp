/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 19:49:50 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/21 21:05:02 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void Pony::setSpecies(std::string species)
{
    this->species_type = species;
}
void Pony::setMagic(std::string magic){
    this->magic_power = magic;
}
void Pony::setNumTeeth(int num_teeth){
    this->num_of_teeth = num_teeth;
}
std::string Pony::getSpecies(void){
    return this->species_type;
}
std::string Pony::getMagic(void){
    return this->magic_power;
}
int Pony::getNumTeeth(void){
    return this->num_of_teeth;
}