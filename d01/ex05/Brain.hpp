/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 16:31:24 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/23 17:19:45 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H_
# define BRAIN_H_

#include <string>
#include <iostream>


class Brain {
    public:
        Brain(void);
        ~Brain(void);

		std::string 		name;
		int 				iq;
        std::string 		identify(void);
};

#endif
