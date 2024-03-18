/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvideira <nvideira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 23:32:03 by nvideira          #+#    #+#             */
/*   Updated: 2024/03/17 22:17:38 by nvideira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class Bureaucrat {
    private:
        std::string const _name;
        int _grade;
    public:
        Bureaucrat(std::string const name, int grade);
        Bureaucrat(Bureaucrat const &src);
        ~Bureaucrat();
        Bureaucrat &operator=(Bureaucrat const &rhs);
        std::string const getName() const;
        int getGrade() const;
        void incrementGrade(int amount);
        void decrementGrade(int amount);
        void signForm(Form &tbs);

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

std::ostream &operator<<(std::ostream& os, Bureaucrat const &dude);

#endif