/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 19:49:50 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/21 21:05:02 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <ctime>

ClapTrap::ClapTrap(std::string n) :
        name(n),
        hitPoints(100),
        maxHitPoints(100),
        energyPoints(100),
        maxEnergyPoints(100),
        level(1),
        meleeAttackDamage(30),
        rangedAttackDamage(20),
        armorDamageReduction(5) 
{
    srand(time(0));
    std::cout << "CL4P-TP <" << name << "> constructor called!!!" << std::endl;
}

ClapTrap::ClapTrap(void) :
        name("No name"),
        hitPoints(100),
        maxHitPoints(100),
        energyPoints(100),
        maxEnergyPoints(100),
        level(1),
        meleeAttackDamage(30),
        rangedAttackDamage(20),
        armorDamageReduction(5) 
{
    srand(time(0));
    std::cout << "CL4P-TP <" << name << "> constructor called!!!" << std::endl;
}


ClapTrap::~ClapTrap(void){
    std::cout << "CL4P-TP <" << name << "> destructor called!!!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &clp)
{
    srand(time(0));
    *this = clp;
    std::cout << "CL4P-TP <" << this->name << "> copy contructor called!!!" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &r){
    if (this != &r){
        hitPoints = r.hitPoints;
        maxHitPoints = r.maxHitPoints;
        energyPoints = r.energyPoints;
        maxEnergyPoints = r.maxEnergyPoints;
        level = r.level;
        name =r.name;
        meleeAttackDamage = r.meleeAttackDamage;
        rangedAttackDamage = r.rangedAttackDamage;
        armorDamageReduction = r.armorDamageReduction;
    }
    return (*this);
}

void ClapTrap::rangedAttack(std::string const & target){
    if (dead())
        return;
    int damage = (rangedAttackDamage - armorDamageReduction);
    std::cout << "CL4P-TP <" << name << ">attacks <" << target << "> at range, causing <" << damage << "> points of damage !" << std::endl;
}

void ClapTrap::meleeAttack(std::string const & target){
    if (dead())
        return;
    int damage = (meleeAttackDamage - armorDamageReduction);
    std::cout << "CL4P-TP <" << name << ">attacks <" << target << "> at range, causing <" << damage << "> points of damage !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    if (dead())
        return;
    hitPoints -= amount;
    if (hitPoints <= 0)
    {
        hitPoints = 0;
        std::cout << "CL4P-TP <" << name << "> is DEAD!!!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount){
    if (hitPoints < maxHitPoints)
    {
        hitPoints += amount;
        if (hitPoints > maxHitPoints)
            hitPoints = maxHitPoints;
        std::cout << "CL4P-TP <" << name << "> new health is " << hitPoints << std::endl;
    }
}

int ClapTrap::dead(void){
    if (hitPoints <= 0){
        std::cout << "CL4P-TP <" << name << "> is already dead" << std::endl;
        return 1;//already dead
    }
    return 0;
}

void ClapTrap::setStats(int hP, int maxHP, int eP, int maxEP, int level, std::string name, int meleeAD, int rangedAD, int armorDR){
    this->hitPoints = hP;
    this->maxHitPoints = maxHP;
    this->energyPoints = eP;
    this->maxEnergyPoints = maxEP;
    this->level = level;
    this->name = name;
    this->meleeAttackDamage = meleeAD;
    this->rangedAttackDamage = rangedAD;
    this->armorDamageReduction = armorDR;
}

int ClapTrap::getHP(void) {
    return (this->hitPoints); 
}

int ClapTrap::getMHP(void) {
    return (this->maxHitPoints);   
}

int ClapTrap::getEP(void) {
    return (this->energyPoints);  
}

int ClapTrap::getMaxEP(void) {
    return (this->maxEnergyPoints);  
}

int ClapTrap::getLev(void) {
    return (this->level);    
}

int ClapTrap::getMeleeAD(void) {
    return (this->meleeAttackDamage);   
}

int ClapTrap::getRangeAD(void) {
    return (this->rangedAttackDamage);    
}

int ClapTrap::getArmDamRed(void) {
    return (this->armorDamageReduction); 
}


void ClapTrap::setHP(int i) {
    this->hitPoints = i;    
}

void ClapTrap::setMHP(int i) {
    this->maxHitPoints = i;    
}

void ClapTrap::setEP(int i) {
    this->energyPoints = i;    
}

void ClapTrap::setMaxEP(int i) {
    this->maxEnergyPoints = i;    
}

void ClapTrap::setLev(int i) {
    this->level = i;    
}

void ClapTrap::setMeleeAD(int i) {
    this->meleeAttackDamage = i;    
}

void ClapTrap::setRangeAD(int i) {
    this->rangedAttackDamage = i;    
}

void ClapTrap::setArmDamRed(int i) {
    this->armorDamageReduction = i;    
}
