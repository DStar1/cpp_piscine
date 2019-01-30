/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 14:42:01 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/28 17:05:05 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45)
{
    return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &bur) : Form(bur.getName(), 72, 45)
{
    *this = bur;
}

RobotomyRequestForm::~RobotomyRequestForm(void){
    std::cout << "destructor called!" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &r){
    (void)r;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	static int i = 0;
	if ((this->getSigned() == true) && (executor.getGrade() <= this->getEGrade()))
	{
		// system("afplay Drill.mp3 &");
		if (i % 2 == 0)
			std::cout << executor.getName() << " has been robotomized successfully" << std::endl;
		else
			std::cout << executor.getName() << " has failed to be robotomized" << std::endl;
	}
	else if (this->getSigned() == false)
		std::cout << "A Bureaucrat must signed this form first before it can be requested." << std::endl;
	else
		throw Form::GradeTooLowException();
	return;
}
// 2:30 (31 jan)
std::ostream	&operator<<(std::ostream &o, RobotomyRequestForm const &r)
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