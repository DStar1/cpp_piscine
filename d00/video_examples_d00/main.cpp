/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 20:10:27 by hasmith           #+#    #+#             */
/*   Updated: 2018/10/02 20:59:03 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "examples.hpp"

int main()
{
    std::cout << "nb_inst: " << Sample::getNbInst() << std::endl;
    Sample instance(3.14f,'c', 54, 7.7);

    instance.foo = 42;
    instance.publicfoo =88;
    std::cout << "yo : " << instance.foo <<  "Public: " << instance.publicfoo << std::endl;
    instance.bar();
    instance.setfoo(13);
    instance.setfoo(-13);//can't be less than 0
    std::cout << "set private foo = " << instance.getfoo() << std::endl;
    
    Sample instance2(3.14f,'c', 54, 7.7);
    std::cout << "1 if _foo is the same 0 is no: compare = " << instance2.compare(&instance) << std::endl;
    
    instance2.setfoo(13);
    std::cout << "AFTER: 1 if _foo is the same 0 is no: compare = " << instance2.compare(&instance) << std::endl;
    
    std::cout << "nb_inst: " << instance2.getNbInst() << std::endl;
    std::cout << "nb_inst: " << Sample::getNbInst() << std::endl;

    Sample instance3(3.14f,'c', 54, 7.7);
    Sample *instance4 = &instance3;

    int Sample::*p = NULL;
    void (Sample::*f)(void) const;

    p = &Sample::foo;
    std::cout << "foo value: " << instance3.foo << std::endl;
    instance3.*p = 21;
    std::cout << "new foo value: " << instance3.foo << std::endl;
    instance4->*p = 42;
    std::cout << "new foo pointer value: " << instance3.foo << std::endl;

    f = &Sample::bar;
    (instance3.*f)();
    (instance4->*f)();

    return 0;
}