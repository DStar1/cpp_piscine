/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 19:54:34 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/25 20:09:56 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

int	main()
{
	FragTrap frag1;
	ScavTrap scav1;

	std::cout << std::endl;
	frag1.meleeAttack("Boop");
	scav1.meleeAttack("Beep");
	frag1.rangedAttack("Boop");
	scav1.rangedAttack("Half-Alive Skags");
	frag1.takeDamage(15);
	scav1.takeDamage(45);
	frag1.beRepaired(20);
	scav1.beRepaired(20);
	frag1.vaulthunter_dot_exe("YOU");
	scav1.challengeNewcomer();
	FragTrap frag2(frag1);
	ScavTrap scav2(scav1);
	return (0);
}