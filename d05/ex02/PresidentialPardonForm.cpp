/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 14:42:01 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/28 17:05:05 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const target)
{
    if (sg < 1 || eg < 1)
        throw Form::GradeTooHighException();
    else if (sg > 150|| eg > 150)
        throw Form::GradeTooLowException();
    return;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &bur)
{
    *this = bur;
}

PresidentialPardonForm::~PresidentialPardonForm(void){
    std::cout << "destructor called!" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &r){
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    executor.execute();//
}