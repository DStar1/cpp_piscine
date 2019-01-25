/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 20:36:56 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/24 14:13:31 by hasmith          ###   ########.fr       */
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
        float toFloat( void ) const; 
        int toInt( void ) const;

    private:
        int fixedVal;
        static const int fracBits = 8;
        
};

std::ostream	&operator<<(std::ostream &o, Fixed const &r);

#endif