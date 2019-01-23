/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 19:54:34 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/21 21:14:36 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

static Pony *ponyOnTheHeap(void)
{
    Pony *new_pony = new Pony("Brian");
    new_pony->setSpecies("Runt");
    new_pony->setMagic("Fly");
    new_pony->setNumTeeth(38);
    return new_pony;
}

static Pony ponyOnTheStack(void)
{
    Pony new_pony("Harry");
    new_pony.setSpecies("Polar");
    new_pony.setMagic("Invisible");
    new_pony.setNumTeeth(3000);
    return new_pony;
}

int main()
{
    Pony *ponyHeap = ponyOnTheHeap();
    std::cout << "_On the heap_" << std::endl;
    ponyHeap->print_class();
    std::cout << std::endl;
    std::cout << "_On the stack_" << std::endl;
    Pony ponyStack = ponyOnTheStack();
    ponyStack.print_class();

    delete ponyHeap; // heap destroyed
    return (0); // stack destroyed
}