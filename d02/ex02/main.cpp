/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 13:45:18 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/24 18:58:12 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    Fixed c = (a + b);
    std::cout << c << std::endl;
    std::cout << (a - b) << std::endl;
    std::cout << (a * b) << std::endl;
    std::cout << (a / b) << std::endl;
    std::cout << (a > b) << std::endl;
    std::cout << (a < b) << std::endl;
    std::cout << (a != b) << std::endl;
    std::cout << (a == b) << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    return 0;
}


