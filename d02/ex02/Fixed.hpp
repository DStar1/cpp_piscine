/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 20:36:56 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/24 17:29:38 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H_
# define BRAIN_H_

#include <string>
#include <iostream>

class Fixed
{
    public:
        Fixed(void);
        Fixed(Fixed const& a);
        Fixed(int const i);
        Fixed(float const f);
        ~Fixed(void);

        int getRawBits(void) const;
        void setRawBits(int const raw);
        Fixed &operator=(Fixed const &r);
        Fixed &operator++(void);
        Fixed operator++(int);
        Fixed &operator--(void);
        Fixed operator--(int);
        float toFloat( void ) const; 
        int toInt( void ) const;
        static Fixed &max(Fixed& a, Fixed& b );
        static Fixed &min(Fixed& a, Fixed& b );
        static Fixed const &max(Fixed const& a, Fixed const& b );
        static Fixed const &min(Fixed const& a, Fixed const& b );

        bool operator==(Fixed const &r);
        bool operator!=(Fixed const &r);
        bool operator<(Fixed const &r);
        bool operator<=(Fixed const &r);
        bool operator>(Fixed const &r);
        bool operator>=(Fixed const &r);
        Fixed operator+(Fixed const &r);
        Fixed operator-(Fixed const &r);
        Fixed operator*(Fixed const &r);
        Fixed operator/(Fixed const &r);

    private:
        int fixedVal;
        static const int fracBits = 8;
        
};

std::ostream	&operator<<(std::ostream &o, Fixed const &r);

#endif