/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 14:42:01 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/28 17:05:05 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137)
{
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &bur) : Form(bur.getName(), 145, 137)
{
    *this = bur;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void){
    std::cout << "destructor called!" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &r){
    (void)r;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	if ((this->getSigned() == true) && (executor.getGrade() <= this->getEGrade())) {
		std::string		file = this->getName() + "_shrubbery";
		std::ofstream	ofs(file);

		ofs << ""
			"                                                         ." << std::endl <<
			"                                              .         ;  " << std::endl <<
			"                 .              .              ;%     ;;   " << std::endl <<
			"                   ,           ,                :;%  %;  " << std::endl <<
			"                    :         ;                   :;%;'     .,  " << std::endl <<
			"           ,.        %;     %;            ;        %;'    ,; " << std::endl <<
			"             ;       ;%;  %%;        ,     %;    ;%;    ,%' " << std::endl <<
			"              %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl <<
			"               ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl <<
			"                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl <<
			"                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl <<
			"                    `:%;.  :;bd%;          %;@%;'" << std::endl <<
			"                      `@%:.  :;%.         ;@@%;'  " << std::endl << 
			"                        `@%.  `;@%.      ;@@%;  " << std::endl <<       
			"                          `@%%. `@%%    ;@@%;  " << std::endl <<      
			"                            ;@%. :@%%  %@@%;  " << std::endl <<     
			"                              %@bd%%%bd%%:;  " << std::endl <<   
			"                                #@%%%%%:;;" << std::endl <<
			"                                %@@%%%::;" << std::endl <<
			"                                %@@@%(o);  . '   " << std::endl <<      
			"                                %@@@o%;:(.,'  " << std::endl <<       
			"                            `.. %@@@o%::;    " << std::endl <<     
			"                               `)@@@o%::;     " << std::endl <<    
			"                                %@@(o)::;     " << std::endl <<   
			"                               .%@@@@%::;         " << std::endl <<
			"                               ;%@@@@%::;.        " << std::endl <<  
			"                              ;%@@@@%%:;;;. " << std::endl <<
			"                          ...;%@@@@@%%:;;;;,..   " << std::endl;
		ofs.close();
		std::cout << executor.getName() << " is the file where trees are being drawn." << std::endl;
	}
	else if (this->getSigned() == false)
		std::cout << "A Bureaucrat must signed this form first before it can be requested." << std::endl;
	else
		throw Form::GradeTooLowException();
	return;
}

std::ostream	&operator<<(std::ostream &o, ShrubberyCreationForm const &r)
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