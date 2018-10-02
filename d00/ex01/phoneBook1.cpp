/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook1.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 20:10:27 by hasmith           #+#    #+#             */
/*   Updated: 2018/10/01 20:49:35 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phoneBook.hpp"

Sample::Sample(void)
{
    std::cout << "Hello" << std::endl;
    return;
}

Sample::~Sample(void)
{
    std::cout << "Bye" << std::endl;
    return;
}

void Sample::bar(void)
{
    std::cout << "Function" << std::endl;
    return;
}