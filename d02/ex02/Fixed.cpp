/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 20:36:53 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/24 17:18:20 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <bitset>
#include <math.h>

Fixed::Fixed(void){
    fixedVal = 0;
}

Fixed::Fixed(Fixed const& a){
    *this = a;
}

Fixed::Fixed(int i){
    setRawBits(i << fracBits);
}

Fixed::Fixed(float f){
    setRawBits(roundf(f * (1 << fracBits)));//rounds to nearest integer away from zero
}

Fixed::~Fixed(void){
    // std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const{
    return fixedVal;
}

void Fixed::setRawBits(int const raw){
    fixedVal = raw;
}

Fixed &Fixed::operator=(Fixed const &r){
    // std::cout << "Assignation operator called" << std::endl;
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



Fixed &Fixed::operator++(void)
{
    // std::cout << "Pre called" << std::endl;
    fixedVal = fixedVal + 1;
    return (*this);
}
 
// Post-increment Operator
Fixed Fixed::operator++(int)
{
    // std::cout << "Post called" << std::endl;
    Fixed const old(*this);
    ++(*this);
    return (old);
}

// Pre-decriment Operator
Fixed &Fixed::operator--(void)
{
    // std::cout << "Pre called" << std::endl;
    fixedVal = fixedVal - 1;
    return (*this);
}
 
// Post-decriment Operator
Fixed Fixed::operator--(int)
{
    // std::cout << "Post called" << std::endl;
    Fixed const old(*this);
    --(*this);
    return (old);
}


Fixed Fixed::operator+(Fixed const &r)
{
    return (Fixed(fixedVal + r.getRawBits())); 
}

Fixed Fixed::operator-(Fixed const &r)
{
    return (Fixed(fixedVal - r.getRawBits())); 
}

Fixed Fixed::operator*(Fixed const &r)
{
    return (Fixed(toFloat() * r.toFloat())); 
}

Fixed Fixed::operator/(Fixed const &r)
{
    if (r.toFloat() == 0){
        std::cout << "Cannot divide by zero! Returning 0" << std::endl;
        return (Fixed(0));
    }
    return (Fixed(toFloat() / r.toFloat()));
}

bool Fixed::operator==(Fixed const &r){
    return (toFloat() == r.toFloat());
}

bool Fixed::operator!=(Fixed const &r){
    return (toFloat() != r.toFloat());
}

bool Fixed::operator<(Fixed const &r){
    return (toFloat() < r.toFloat());
}

bool Fixed::operator<=(Fixed const &r){
    return (toFloat() <= r.toFloat());
}

bool Fixed::operator>(Fixed const &r){
    return (toFloat() > r.toFloat());
}

bool Fixed::operator>=(Fixed const &r){
    return (toFloat() >= r.toFloat());
}


Fixed &Fixed::max(Fixed& a, Fixed& b ){
    return (a.toFloat() > b.toFloat() ? a : b);
}

Fixed &Fixed::min(Fixed& a, Fixed& b ){
    return (a.toFloat() < b.toFloat() ? a : b);
}

Fixed const &Fixed::max(Fixed const& a, Fixed const& b ){
    return (a.toFloat() > b.toFloat() ? a : b);
}

Fixed const &Fixed::min(Fixed const& a, Fixed const& b ){
    return (a.toFloat() < b.toFloat() ? a : b);
}