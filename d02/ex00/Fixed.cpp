/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 20:36:53 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/24 14:05:25 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void){
    std::cout << "Default constructor called" << std::endl;
    fixedVal = 0;
}

Fixed::Fixed(Fixed const& a){
    std::cout << "Copy constructor called" << std::endl;
    *this = a;
}

Fixed::~Fixed(void){
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return fixedVal;
}

void Fixed::setRawBits(int const raw){
    std::cout << "setRawBits member function called" << std::endl;
    fixedVal = raw;
}

Fixed &Fixed::operator=(Fixed const &r){
    std::cout << "Assignation operator called" << std::endl;
    if (this != &r){
        this->fixedVal = r.getRawBits();
    }
    return (*this);
}