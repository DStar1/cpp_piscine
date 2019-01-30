/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 14:42:01 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/28 17:05:05 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H_
# define FORM_H_

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    public:
        Form(std::string const n, int sg, int eg);
        Form(Form &obj);
        Form(void);
        virtual ~Form(void);

        Form &operator=(Form const &r);

        bool            getSigned(void) const;
        int             getSGrade(void) const;
        int             getEGrade(void) const;
        std::string     getName(void) const;

        void				signForm(void);
        void				makeSigned(Bureaucrat &b);

        virtual void 		execute(Bureaucrat const &obj) const = 0;

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
        bool ssigned;
        int const sgrade;
        int const egrade;


};

std::ostream			&operator<<(std::ostream &o, Form const &r);

#endif