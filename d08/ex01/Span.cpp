/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 18:32:14 by hasmith           #+#    #+#             */
/*   Updated: 2019/02/01 22:24:44 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <vector>
#include <map>
#include <list>
#include <algorithm>
#include <exception>
#include <numeric>
#include <vector>
#include <array>
#include <iostream>
#include <functional>
#include <iterator>
#include "Span.hpp"

Span::Span(unsigned int nb) : n(nb) {
    return;
}

Span::Span(Span const &r) {
    *this = r;
    return;
}

Span::Span(void) {
    n = 0;
    return;
}

Span::~Span(void) {
    return;
}

Span &Span::operator=(Span const &r) 
{
	this->arr = r.arr;
	this->n = r.n;
	return *this;
}

void Span::addNumber(int n) {
    if (arr.size() < this->n)//<= ?
        arr.push_back(n);
    else
        throw std::exception();
}

int Span::shortestSpan(void) {
    int tmp[n];
    std::vector<int> arrSorted = arr;
    std::sort(arrSorted.begin(), arrSorted.end());
    std::adjacent_difference(arrSorted.begin(), arrSorted.end(), tmp);
    int min = std::numeric_limits<int>::max();
    for (unsigned int i = 0; i < n; i++)
        min = tmp[i] < min ? tmp[i] : min;
    return (min);
}

int Span::longestSpan(void) {
    
    return (*std::max_element(arr.begin(), arr.end()) - *std::min_element(arr.begin(), arr.end()));
}
