/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 20:57:07 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/29 20:57:16 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Intern_H
# define Intern_H

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class Form;

class	Intern
{

	public:

		Intern(void);
		Intern(Intern &obj);
		virtual ~Intern(void);
		Intern &operator=(Intern const &r);

		Form	*makeForm(std::string form, std::string target);

}; 

#endif