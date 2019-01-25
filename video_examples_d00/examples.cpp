/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   examples.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 20:10:27 by hasmith           #+#    #+#             */
/*   Updated: 2018/10/02 20:36:11 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "examples.hpp"

Sample::Sample(float const f, char p1, int p2, float p3) : a2(p2), a3(p3), pi(f), qd(42)
{
    this->foo = 42;
    this->a1 = p1;//do above instead of this
    this->_privatefoo = 0;
    this->publicfoo = 1;
    // this->_foo = 2;
    std::cout << "Hello = " << this->foo
            << "NEW| " << this->a1 << ' '
             << this->a2 << " Private : " << this->_privatefoo << std::endl;
    // std::cout << "private foo = " << this->_foo << std::endl;
    this->bar();
    Sample::_nbInst = -1;
    return;
}

Sample::~Sample(void)
{
    std::cout << "Bye(Destructor)" << std::endl;
    return;
}

void Sample::bar(void) const
{
    std::cout << "Function | (" << this->pi << ' ' << this->qd << ')' << std::endl;
    return;
}

int Sample::getfoo(void) const{
    return this->_foo;
}

void Sample::setfoo(int v){
    if (v >= 0)
        this->_foo = v;

    return;
}

int Sample::compare(Sample * other) const{
    if (this->_foo == other->_foo)
        return 1;

    return 0;
}

int Sample::getNbInst(void) {
    return Sample::_nbInst;
}

int Sample::_nbInst = 1;