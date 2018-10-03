/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 20:10:27 by hasmith           #+#    #+#             */
/*   Updated: 2018/10/02 21:26:14 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phoneBook.hpp"

int main()
{
    char buff[512];

    while (1){
        std::cout << "Enter input(SEARCH, ADD, EXIT): ";
        std::cin >> buff;
        if (strcmp(buff, "EXIT")==0)
            break;
        else if (strcmp(buff, "ADD")==0){
            std::cout << "ADD" << std::endl;
            Sample person(1);

        }
        else if (strcmp(buff, "SEARCH")==0)
            std::cout << "SEARCH" << std::endl;
    }
    return 0;
}