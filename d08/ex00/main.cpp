/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 16:04:37 by hasmith           #+#    #+#             */
/*   Updated: 2019/02/01 18:30:59 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <list>

int main(void) {
    std::list<int> arr;
    for (int i = 0; i < 6; i++)
        arr.push_back(i);
    int n = 3;
    try {
        int i = easyfind(arr, n);
        std::cout << i << std::endl;
    }
    catch (std::exception& e) {
        std::cout << "Not in array" << std::endl;
    }    
    return 0;
}