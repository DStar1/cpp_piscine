/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 14:07:03 by hasmith           #+#    #+#             */
/*   Updated: 2018/10/01 15:22:02 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
#include <iostream>

int main(int argc, char** argv)
{
    if (argc > 1){
        for (int i = 1; i < argc; ++i){
            for (int j = 0; argv[i][j]; ++j)
                putchar(toupper(argv[i][j]));
        }
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
    return 0;
}