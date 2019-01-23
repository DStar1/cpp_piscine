/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 19:54:34 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/22 23:05:57 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main()
{
	std::cout << "New Zombie on stack!" << std::endl;
	Zombie stackZ1 = Zombie("Mr. Bean", "Comic");

	std::cout << "\nNew Zombie on heap!" << std::endl;
	ZombieEvent *heapZ1 = new ZombieEvent("Mr. Crabs", "Cub");

	std::cout << "\nSet type of Zombie to crab!" << std::endl;
	heapZ1->setZombieType("Crab");

	std::cout << "\nSame zombie event again with type just set!" << std::endl;
	heapZ1->newZombie("Cub");

	std::cout << "\nSet type of Zombie to crab!" << std::endl;
	heapZ1->setZombieType("Crusty Crab");

	std::cout << "\nNew Zombie on heap!" << std::endl;
	ZombieEvent *heapZ2 = new ZombieEvent("Mr. Manhattan", "All powerful");

	std::cout << "\nNew random zombie with same type!" << std::endl;
	heapZ2->randomChump();

	std::cout << "\nDelete zombies!" << std::endl;
	std::cout << "\nOrder: heapZ2, heapZ1, stackZ1" << std::endl;

	delete heapZ2;
	delete heapZ1;
    return (0); // stack destroyed
}
