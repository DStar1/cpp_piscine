/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 21:41:26 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/22 22:02:42 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(){
    std::string brain = "HI THIS IS BRAIN";
    std::string *brainPtr = &brain;
    std::string& brainRef = brain;
    std::cout << brainPtr << std::endl;
    return 0;
}