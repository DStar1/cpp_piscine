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

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 25, 5)
{
    return;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &bur) : Form(bur.getName(), 25, 5)
{
    *this = bur;
}

PresidentialPardonForm::~PresidentialPardonForm(void){
    std::cout << "destructor called!" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &r){
    (void)r;
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if ((this->getSigned() == true) && (executor.getGrade() <= this->getEGrade()))
		std::cout << executor.getName() << " has been pardoned by Zafod Beeblebrox" << std::endl;
	else if (this->getSigned() == false)
		std::cout << "A Bureaucrat must signed this form first before it can be requested." << std::endl;
	else
		throw Form::GradeTooLowException();
	return;
}

std::ostream	&operator<<(std::ostream &o, PresidentialPardonForm const &r)
{
	o << "Form Details:" << std::endl
			<< "Name: " << r.getName() << std::endl
			<< "Signing Grade Requirement: " << r.getSGrade() << std::endl
			<< "Execution Grade Requirement: " << r.getEGrade() << std::endl;
	if(r.getSigned())
			o << "Form has been signed." << std::endl;
	else
			o << "Form has not been signed yet." << std::endl;
	return (o);
}