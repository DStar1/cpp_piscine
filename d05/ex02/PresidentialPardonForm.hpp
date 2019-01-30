/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 14:42:01 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/28 17:05:05 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H_
# define PRESIDENTIALPARDONFORM_H_

#include <string>
#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form {
    public:
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(PresidentialPardonForm &bur);
        PresidentialPardonForm(void);
        virtual ~PresidentialPardonForm(void);

        PresidentialPardonForm &operator=(PresidentialPardonForm const &r);

        void execute(Bureaucrat const & executor) const;

};

std::ostream	&operator<<(std::ostream &o, PresidentialPardonForm const &r); 

#endif