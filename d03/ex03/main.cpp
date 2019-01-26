/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 19:54:34 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/25 20:14:42 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int	main()
{
	FragTrap frag;
	ScavTrap scav;

	std::cout << std::endl;

	frag.meleeAttack("frag");
	scav.meleeAttack("skag");

	frag.rangedAttack("you");
	scav.rangedAttack("me");

	frag.takeDamage(15);
	scav.takeDamage(20);

	frag.beRepaired(20);
	scav.beRepaired(20);

	frag.vaulthunter_dot_exe("YOU and ME");
	scav.challengeNewcomer();

	FragTrap frag2(frag);
	ScavTrap scav2(scav);

	NinjaTrap ninja1("ninja");
	ninja1.ninjaShoeBox(frag2);
	ninja1.ninjaShoeBox(scav2);

	NinjaTrap ninja2;
	ninja2.ninjaShoeBox(ninja1);

	ClapTrap clap1("clap");
	ninja2.ninjaShoeBox(clap1);
	
	return (0);
}