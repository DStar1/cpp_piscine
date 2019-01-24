/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 16:31:15 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/23 16:31:15 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void)
{
	return;
}

Human::~Human(void) 
{
	return;
}

std::string	Human::identify()
{
	return (this->brainRef.identify());
}

Brain &Human::getBrain(void)
{
	return this->brainRef;
}
