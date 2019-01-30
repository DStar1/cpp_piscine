/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 14:42:01 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/29 19:46:18 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H_
# define BUREAUCRAT_H_

#include <string>
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat {
    public:
        Bureaucrat(std::string n, int grade);
        Bureaucrat(Bureaucrat &bur);
        Bureaucrat(void);
        virtual ~Bureaucrat(void);

        Bureaucrat &operator=(Bureaucrat const &r);
        void operator+=(const int i);
        void operator-=(const int i);

        int getGrade(void) const;
        std::string getName(void) const;

        void executeForm(Form const &form);

        class GradeTooHighException : public std::exception
        {
            public:
                GradeTooHighException(void);
                GradeTooHighException(GradeTooHighException const &obj);
                virtual ~GradeTooHighException(void) throw();
				GradeTooHighException &operator=(GradeTooHighException const &r);
				virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                GradeTooLowException(void);
                GradeTooLowException(GradeTooLowException const &obj);
                virtual ~GradeTooLowException(void) throw();
				GradeTooLowException &operator=(GradeTooLowException const &r);
				virtual const char* what() const throw();
        };
    private:
        std::string const name;
        int grade;


};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &r); 

#endif