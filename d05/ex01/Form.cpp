/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 14:41:54 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/28 17:05:01 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "Form.hpp"

Form::Form(std::string const n, int sg, int eg) : name(n), sgrade(sg), egrade(eg)
{
    if (sg < 1 || eg < 1)
        throw Form::GradeTooHighException();
    else if (sg > 150|| eg > 150)
        throw Form::GradeTooLowException();
    return;
}

Form::Form(Form &bur)
{
    *this = bur;
}

Form::~Form(void){
    std::cout << "destructor called!" << std::endl;
}

Form &Form::operator=(Form const &r){
    if (this != &r){
        this->ssigned = r.ssigned;
    }
    return (*this);
}

bool            Form::getSigned(void) const {
    return this->ssigned;
}

int             Form::getSGrade(void) const {
    return this->sgrade;
}

int             Form::getEGrade(void) const {
    return this->egrade;
}

void				Form::signForm(void) {
    this->ssigned = true;
}

void				Form::makeSigned(Bureaucrat &b) {
    if (b.getGrade() > this->sgrade){
        std::cout << "<bureaucrat " << b.getName() << "> cannot sign <" << this->name << "> because ";
        throw Form::GradeTooLowException();
    }
    else {
        if (this->ssigned)
            std::cout << "<bureaucrat " << b.getName() << "> cannot sign <" << this->name << "> because it is already signed" << std::endl;
        else {
            std::cout << "<Bureaucrat " << b.getName() << "> signs <" << this->name << ">" << std::endl;
			signForm();
        }
    }
}

std::string     Form::getName(void) const {
    return this->name;
}

std::ostream			&operator<<(std::ostream &o, Form const &r)
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

/////// Works!up

Form::GradeTooHighException::GradeTooHighException(void)
{
	return;
}

Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const &obj)
{
	*this = obj;
	return;
}

Form::GradeTooHighException::~GradeTooHighException(void) throw()
{
	return;
}

Form::GradeTooHighException &Form::GradeTooHighException::operator=(GradeTooHighException const &r) 
{
	(void)r;
	return (*this);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Form Error: Grade too high");
}
///////

Form::GradeTooLowException::GradeTooLowException(void)
{
	return;
}

Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const &obj)
{
	*this = obj;
	return;
}

Form::GradeTooLowException::~GradeTooLowException(void) throw()
{
	return;
}

Form::GradeTooLowException &Form::GradeTooLowException::operator=(GradeTooLowException const &r) 
{
	(void)r;
	return (*this);
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Form Error: Grade too low");
}

