/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 20:57:50 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/29 21:08:14 by hasmith          ###   ########.fr       */
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
#include "Intern.hpp"

int	main()
{
	Bureaucrat	test("Moop", 1);
	Bureaucrat	test2("Star", 150);
	std::cout << "Created Bureaucrat Moop, grade 1" << std::endl << test << std::endl <<
		"Created Bureaucrat Star, grade 150" << std::endl << test2 << std::endl;

	Intern	intern;
	std::cout << "Created new Intern, will now proceed to make forms with intern" << std::endl << std::endl;

	Form	*ftest;

	std::cout << "Creating Shrubbery Creation form with target Galactica with Intern" << std::endl;
	ftest = intern.makeForm("Shrubbery Creation", "Galactica");

	std::cout << "Now having Moop signed the form (should succeed), and Star execute form (should fail)" << std::endl;
	ftest->makeSigned(test);
	test2.executeForm(*ftest);

	Form	*ftest2;

	std::cout << std::endl << "Creating Robotomy Request form with target iRobot with Intern" << std::endl;
	ftest2 = intern.makeForm("Robotomy Request", "iRobot");

	std::cout << "Now having Moop signed the form (should succeed), and Star execute form (should fail)" << std::endl;
	ftest2->makeSigned(test);
	test2.executeForm(*ftest2);

	Form	*ftest3;

	std::cout << std::endl << "Creating Presidential Pardon form with target pmurt with Intern" << std::endl;
	ftest3 = intern.makeForm("Presidential Pardon", "pmurt");

	std::cout << "Now having Moop signed the form (should succeed), and Star execute form (should fail)" << std::endl;
	ftest3->makeSigned(test);
	test2.executeForm(*ftest3);

	Form *ftest4;
	std::cout << std::endl << "Creating Non Existent form with target Nope with Intern, should fail" << std::endl;
	ftest4 = intern.makeForm("Non Existent", "Nope");

	delete ftest;
	delete ftest2;
	delete ftest3;
	delete ftest4;

	return (0);
}