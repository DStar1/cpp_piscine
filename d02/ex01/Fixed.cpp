/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 20:36:53 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/24 14:58:38 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <bitset>
#include <math.h>

Fixed::Fixed(void){
    std::cout << "Default constructor called" << std::endl;
    fixedVal = 0;
}

Fixed::Fixed(Fixed const& a){
    std::cout << "Copy constructor called" << std::endl;
    *this = a;
}

Fixed::Fixed(int i){
    std::cout << "Int constructor called" << std::endl;
    setRawBits(i << fracBits);
}

Fixed::Fixed(float f){
    std::cout << "Float constructor called" << std::endl;
    setRawBits(roundf(f * (1 << fracBits)));//rounds to nearest integer away from zero
}

Fixed::~Fixed(void){
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const{
    return fixedVal;
}

void Fixed::setRawBits(int const raw){
    fixedVal = raw;
}

Fixed &Fixed::operator=(Fixed const &r){
    std::cout << "Assignation operator called" << std::endl;
    if (this != &r){
        this->fixedVal = r.getRawBits();
    }
    return (*this);
}

float Fixed::toFloat( void ) const {
    return ((float)getRawBits() / (1 << fracBits));
}

int Fixed::toInt( void ) const {
    return (getRawBits() >> fracBits);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &r){
    o << r.toFloat();
    return o;
}