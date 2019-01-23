/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 19:49:55 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/22 23:31:43 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H_
# define ZOMBIE_H_

#include <string>
#include <iostream>

class Zombie {
    public:
        Zombie(void);
        ~Zombie(void);
        void announce();
    // private:
        std::string  name;
        std::string  type;
};


#endif