/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 19:54:34 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/29 17:23:26 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	int i = 0;
	int x = 0;
	Bureaucrat test("Me", 1);
	std::cout << "Created Bureaucrat test, grade is 1\nMe is signing" << std::endl;

	Form form1("Olympic champion", 100, 100);
	std::cout << "Created <Olympic champion form>, Sign and exec is 100, and signing it" << std::endl;
	form1.makeSigned(test);
	std::cout << "Sign again" << std::endl;
	form1.makeSigned(test);

	std::cout << "Demonstrating error handling" << std::endl << std::endl;
	while(i++ < 10)
	{
		try
		{
			if (i % 2 == 0)
				x = 0;
			else
				x = 151;
			Form form2("Error Testing", x, x);
		}
		catch (Bureaucrat::GradeTooHighException &e)
		{
			std::cout << e.what() << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException &e)
		{
			std::cout << e.what() << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << std::endl << "Creating new Bureaucrat Mook with grade 8 and new form <Travel papers> grade 50 or higher" << 
		std::endl << std::endl;
	try
	{
		Bureaucrat test2("Mook", 8);
		std::cout << test2;
		
		Form form2("Travel papers", 50, 50);
		std::cout << form2;

		form2.makeSigned(test2);
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}