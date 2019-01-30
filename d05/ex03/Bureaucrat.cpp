/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 14:41:54 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/29 18:47:55 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const n, int gradeGiven) : name(n)
{
    if (gradeGiven < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (gradeGiven > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->grade = gradeGiven;
    return;
    // std::cout << "FR4G-TP <" << name << "> contructor called!!!" << std::endl;
}

Bureaucrat::Bureaucrat(void) :
        name("No name"),
        grade(150)
{
    // srand(time(0));
    // std::cout << "FR4G-TP <" << name << "> contructor called!!!" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat &bur)
{
    // srand(time(0));
    *this = bur;
    // std::cout << "FR4G-TP <" << this->name << "> copy contructor called!!!" << std::endl;
}

Bureaucrat::~Bureaucrat(void){
    std::cout << "destructor called!" << std::endl;
}

int Bureaucrat::getGrade(void) const {
    return this->grade;
}

std::string Bureaucrat::getName(void) const {
    return this->name;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &r){
    if (this != &r){
        grade = r.grade;
    }
    return (*this);
}

void Bureaucrat::operator+=(int const i) {
    // GradeTooLowException increment is decreasing vise versa
    if ((this->grade - i) < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        this->grade = this->grade - i;
}
void Bureaucrat::operator-=(int const i) {
    // GradeTooLowException increment is decreasing vise versa
    if ((this->grade + i) > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->grade = this->grade + i;
}

void Bureaucrat::executeForm(Form const &form) {
	if (this->grade < form.getEGrade())
	{
		std::cout << "Bureaucrat " << this->name << " executes " << form.getName() << std::endl;
		form.execute(*this);
	}
	else
		std::cout << "Bureaucrat " << this->name << " grade is too low (" << this->grade << "). Must be "
			<< form.getEGrade() << " to execute " << form.getName() << std::endl;
	return;
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &r)
{
	o << "[" << r.getName() << "], bureaucrat grade [" << r.getGrade() << "]" << std::endl;
	return (o);
}

/////// Works!up

Bureaucrat::GradeTooHighException::GradeTooHighException(void)
{
	return;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const &obj)
{
	*this = obj;
	return;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw()
{
	return;
}

Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const &r) 
{
	(void)r;
	return (*this);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Error: Grade too high (<1)");
}
///////

Bureaucrat::GradeTooLowException::GradeTooLowException(void)
{
	return;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const &obj)
{
	*this = obj;
	return;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw()
{
	return;
}

Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const &r) 
{
	(void)r;
	return (*this);
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Error: Grade too low (>150)");
}

