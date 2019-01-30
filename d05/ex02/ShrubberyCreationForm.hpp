/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 14:42:01 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/28 17:05:05 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H_
# define SHRUBBERYCREATIONFORM_H_

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class ShrubberyCreationForm : public Form {
    public:
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm &bur);
        ShrubberyCreationForm(void);
        virtual ~ShrubberyCreationForm(void);

        ShrubberyCreationForm &operator=(ShrubberyCreationForm const &r);

        void execute(Bureaucrat const & executor) const;
};

std::ostream	&operator<<(std::ostream &o, ShrubberyCreationForm const &r); 

#endif