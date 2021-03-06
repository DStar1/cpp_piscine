/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 19:54:34 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/29 17:26:05 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include "Bureaucrat.hpp"

int	main()
{
	int i = 0;
	int x = 0;
	Bureaucrat test("Me", 1);
	std::cout << "Created Bureaucrat Me, will demonstrate << overload at end of program/nDemonstrating error handling, 10x loop of too high and too low" << std::endl << std::endl;
	while(i++ < 10)
	{
		try
		{
			if (i % 2 == 0)
				x = 0;
			else
				x = 151;
			Bureaucrat test2("Error Testing", x);
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
	std::cout << std::endl << "Creating new Bureaucrat Mook with grade 8, will increase grade until its too high" << 
		std::endl << std::endl;
	try
	{
		Bureaucrat test3("Mook", 8);
		std::cout << test3;
		i = 0;
		while (i++ < 10)
		{
			std::cout << "Incremented " << test3.getName() << " grade. Old grade: [" << test3.getGrade() << "]. New Grade: [";
			test3 += 1;
			std::cout << test3.getGrade() << "]" << std::endl;
		}
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << "]" << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << "]" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << "]" << std::endl;
	}

	std::cout << std::endl << "Creating new Bureaucrat leap starting grade 130, will decrease grade until its too low" << 
		std::endl << std::endl;
	try
	{
		Bureaucrat test4("leap", 130);
		std::cout << test4;
		i = 0;
		x = 0;
		while (i++ < 10)
		{
			if (i % 2 == 0)
				x = 2;
			else
				x =  3;
			std::cout << "Incremented " << test4.getName() << " grade. Old grade: [" << test4.getGrade() << "]. New Grade: [";
			test4 -= x;
			std::cout << test4.getGrade() << "]" << std::endl;
		}
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << "]" << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << "]" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << "]" << std::endl;
	}

	std::cout << std::endl << "End demonstration, now displaying << operator from Arta who was made at the start" <<
		std::endl << test;
	return (0);
}