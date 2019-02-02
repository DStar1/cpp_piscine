/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 18:32:29 by hasmith           #+#    #+#             */
/*   Updated: 2019/02/01 22:25:18 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <exception>
#include <list>
#include <vector>

// template <typename T>

class Span
{
    public:
        Span(unsigned int nb);
        Span(Span const &r);
        Span(void);
        ~Span(void);
		Span &operator=(Span const &r);
        void addNumber(int n);
        int shortestSpan(void);
        int longestSpan(void);

		class StorageLimitException : public std::exception
		{
			public:
				
				StorageLimitException(void);
				StorageLimitException(StorageLimitException const &obj);
				virtual ~StorageLimitException(void) throw();
				StorageLimitException &operator=(StorageLimitException const &r);
				virtual const char* what() const throw();
		};

		class NotEnoughValuesException : public std::exception
		{
			public:
				
				NotEnoughValuesException(void);
				NotEnoughValuesException(NotEnoughValuesException const &obj);
				virtual ~NotEnoughValuesException(void) throw();
				NotEnoughValuesException &operator=(NotEnoughValuesException const &r);
				virtual const char* what() const throw();
		};

    private:
        unsigned int n;
        std::vector<int> arr;
};

#endif