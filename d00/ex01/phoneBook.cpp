/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 20:10:27 by hasmith           #+#    #+#             */
/*   Updated: 2018/10/02 21:28:28 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phoneBook.hpp"

Sample::Sample(int start)
{
    (void)start;
    std::cout << "Start (costructor)" << std::endl;
    Sample::setName();
    std::cout << "The name is " << Sample::getName() << std::endl;
    return;
}

Sample::~Sample(void)
{
    std::cout << "Bye(Destructor)" << std::endl;
    return;
}

void Sample::setName(void)
{
    char buff[512];
    std::cout << "Enter name: ";
    std::cin >> buff;
    Sample::_firstName = strdup(buff);
}

char *Sample::getName(void) const
{
    return Sample::_firstName;
}
