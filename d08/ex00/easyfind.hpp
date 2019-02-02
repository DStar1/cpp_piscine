/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 16:04:10 by hasmith           #+#    #+#             */
/*   Updated: 2019/02/01 18:30:37 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <exception>

template <typename T>

int easyfind(T arr, int j) {
    int i = 0;
    typename T::iterator it = std::find(arr.begin(), arr.end(), j);
    try {
        i = std::distance(arr.begin(), it);
    }
    catch (std::exception& e) {
        throw std::exception();
    }
    if (it != arr.end())
        return i;
    throw std::exception();
}