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

Form::Form(std::string const n, int gradeGiven) : name(n)
{
    if (gradeGiven < 1)
        throw Form::GradeTooHighException();
    else if (gradeGiven > 150)
        throw Form::GradeTooLowException();
    else
        this->grade = gradeGiven;
    return;
    // std::cout << "FR4G-TP <" << name << "> contructor called!!!" << std::endl;
}

Form::Form(void) :
        name("No name"),
        grade(150)
{
    // srand(time(0));
    // std::cout << "FR4G-TP <" << name << "> contructor called!!!" << std::endl;
}

Form::Form(Form &bur)
{
    // srand(time(0));
    *this = bur;
    // std::cout << "FR4G-TP <" << this->name << "> copy contructor called!!!" << std::endl;
}

Form::~Form(void){
    std::cout << "destructor called!" << std::endl;
}

int Form::getGrade(void) const {
    return this->grade;
}

std::string Form::getName(void) const {
    return this->name;
}

Form &Form::operator=(Form const &r){
    if (this != &r){
        grade = r.grade;
    }
    return (*this);
}

void Form::operator+=(int const i) {
    // GradeTooLowException increment is decreasing vise versa
    if ((this->grade - i) < 1)
        throw Form::GradeTooHighException();
    else
        this->grade = this->grade - i;
}
void Form::operator-=(int const i) {
    // GradeTooLowException increment is decreasing vise versa
    if ((this->grade + i) > 150)
        throw Form::GradeTooLowException();
    else
        this->grade = this->grade + i;
}

std::ostream &operator<<(std::ostream &o, Form const &r)
{
	o << "[" << r.getName() << "], Form grade [" << r.getGrade() << "]" << std::endl;
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
	return ("Error: Grade too high (<1)");
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
	return ("Error: Grade too low (>150)");
}

