/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 22:27:40 by hasmith           #+#    #+#             */
/*   Updated: 2019/02/01 22:32:30 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iterator>
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
#include <stack>

template <typename T>
class	MutantStack : public std::stack<T>
{
	public:
		MutantStack<T>(void)
		{
			return;
		}
		MutantStack(MutantStack const &r)
		{
			(void)r;
			return;
		}
		~MutantStack<T>(void)
		{
			return;
		}
		MutantStack &operator=(MutantStack const &r)
		{
			(void)r;
			return;
		}
		T top(void)
		{
			return (stack.front());
		}
		T size(void)
		{
			return (stack.size());
		}
		typedef std::list<int>::iterator iterator;
		iterator begin()
		{
			return (stack.begin());
		}
		iterator end() {
			return (stack.end());
		}
		void push(T value)
		{
			stack.push_front(value);
		}
		void pop(void)
		{
			stack.pop_front();
		}
	private:
		std::list<T>		stack;

};

#endif