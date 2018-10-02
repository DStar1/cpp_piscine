/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 20:10:27 by hasmith           #+#    #+#             */
/*   Updated: 2018/10/01 20:56:54 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phoneBook.hpp"

int main()
{
    Sample instance;

    instance.foo = 42;
    std::cout << "yo" << instance.foo << std::endl;
    return 0;
}