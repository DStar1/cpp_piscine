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

class Form {
    public:
        Form(std::string n, int sgrade, int egrade);
        Form(Form &obj);
        Form(void);
        virtual ~Form(void);

        Form &operator=(Form const &r);

        bool            getSigned(void) const;
        int             getSGrade(void) const;
        void            setSGrade(int i);
        int             getEGrade(void) const;
        void            setEGrade(void);
        std::string     getName(void) const;

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
        int ssigned;
        int sgrade;
        int egrade;


};

std::ostream	&operator<<(std::ostream &o, Form const &r); 

#endif