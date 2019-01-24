/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 16:31:24 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/23 17:24:35 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H_
# define HUMAN_H_

#include <string>
#include <iostream>
#include "Human.hpp"
#include "Brain.hpp"


class Human {
    public:
        Human(void);
        ~Human(void);

        Brain brainRef;
        Brain &getBrain(void);
        std::string identify(void);
};

#endif
