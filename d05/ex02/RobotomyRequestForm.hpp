/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 14:42:01 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/28 17:05:05 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H_
# define ROBOTOMYREQUESTFORM_H_

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class RobotomyRequestForm : public Form {
    public:
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(RobotomyRequestForm &bur);
        RobotomyRequestForm(void);
        virtual ~RobotomyRequestForm(void);

        RobotomyRequestForm &operator=(RobotomyRequestForm const &r);

        void execute(Bureaucrat const & executor) const;
};

std::ostream	&operator<<(std::ostream &o, RobotomyRequestForm const &r); 

#endif