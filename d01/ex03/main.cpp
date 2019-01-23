/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 23:33:34 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/22 23:39:40 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int main()
{
	int buff;
	std::cout << "Enter num for amount of Zombies:" << std::endl;
	std::cin >> buff;
	while (1) {
		if (!std::cin) {
			// Clears flag bit
			std::cin.clear();
			// Ignores, so does not enter infinit loop
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Enter an integer!\nEnter num for amount of Zombies:" << std::endl;
			std::cin >> buff;
		}
		else {
			ZombieHorde zHorde = ZombieHorde(buff);
			zHorde.announce();
			break;
		}
	}
    return (0); // stack destroyed
}
