/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 16:31:15 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/23 16:31:15 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>

Brain::Brain(void)
{
	return;
}

Brain::~Brain(void) 
{
	return;
}

std::string	Brain::identify()
{
	std::stringstream	addr;
	addr << this;
	return addr.str();
}
