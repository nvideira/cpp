/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvideira <nvideira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 04:34:59 by nvideira          #+#    #+#             */
/*   Updated: 2024/03/22 02:16:43 by nvideira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
//# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    private:
        std::string const   _name;
        bool                _signed;
        int const           _sign_grade;
        int const           _exec_grade;
    
    public:
        Form(std::string const &name, int const sign_grade, int const exec_grade);
        ~Form();
        Form(Form const &src);
        Form &operator=(Form const &rhs);
        std::string const getName() const;
        bool getSigned() const;
        int getSignGrade() const;
        int getExecGrade() const;
        void beSigned(Bureaucrat &guy);
        
        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw();
        };
};

std::ostream &operator<<(std::ostream& os, Form const &paper);

#endif