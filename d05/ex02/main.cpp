/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 19:54:34 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/29 20:37:54 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	Bureaucrat	test("Me", 1);
	Bureaucrat	test2("Moop", 150);
	std::cout << "Created Bureaucrat Me, grade 1" << std::endl << test << std::endl <<
		"Created Bureaucrat Moop, grade 150" << std::endl << test2 << std::endl <<
		"Creating Shrubbery Form <Sleepy>" << std::endl;

	ShrubberyCreationForm shrub("Sleepy");
	std::cout << shrub << std::endl << "Executing form before signing, it will not work" << std::endl;

	shrub.execute(test);

	std::cout << std::endl << "Now signing the form with Me and than executing the form" << std::endl;
	shrub.makeSigned(test);
	test.executeForm(shrub);

	try
	{
		std::cout << std::endl << "Attempting to execute form with Moop which should error" << std::endl;
		test2.executeForm(shrub);
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "Creating Robotomy Request Form <Robot>" << std::endl;

	RobotomyRequestForm robot("Robot");
	std::cout << robot << std::endl << "**Executing form before signing, it will not work" << std::endl;

	robot.execute(test);

	std::cout << std::endl << "Now signing the form with Me and than executing the form 2x" << std::endl;
	robot.makeSigned(test);
	test.executeForm(robot);
	test.executeForm(robot);

	try
	{
		std::cout << std::endl << "Attempting to execute form with Moop which should error" << std::endl;
		test2.executeForm(robot);
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "Creating Presidential Pardon Form <Thump>" << std::endl;

	PresidentialPardonForm pres("Thump");
	std::cout << pres << std::endl << "Executing form before signing, it will not work" << std::endl;

	pres.execute(test);

	std::cout << std::endl << "Now signing the form with Me and than executing the form" << std::endl;
	pres.makeSigned(test);
	test.executeForm(pres);

	try
	{
		std::cout << std::endl << "Attempting to execute form with Moop which should error" << std::endl;
		test2.executeForm(pres);
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}