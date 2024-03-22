/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvideira <nvideira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 04:35:07 by nvideira          #+#    #+#             */
/*   Updated: 2024/03/22 03:11:58 by nvideira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string const &name, int const sign_grade, int const exec_grade) : _name(name), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
    if( sign_grade < 1 || exec_grade < 1)
    {
        throw Form::GradeTooHighException();
    } else if (sign_grade > 150 || exec_grade > 150)
    {
        throw Form::GradeTooLowException();
    }
    this->_signed = false;
    std::cout << "Default constructor called for " << this->_name << std::endl;
}

Form::Form(Form const &src) : _name(src._name), _sign_grade(src._sign_grade), _exec_grade(src._exec_grade)
{
    std::cout << "Copy constructor called for " << this->_name << std::endl;
}

Form::~Form()
{
    std::cout << "Destructor called for " << this->_name << std::endl;
}

Form &Form::operator=(Form const &rhs)
{
    if (this != &rhs)
    {
        this->_signed = rhs._signed;
    }
    return *this;
}

std::string const Form::getName() const
{
    return this->_name;
}

bool Form::getSigned() const
{
    return this->_signed;
}

int Form::getSignGrade() const
{
    return this->_sign_grade;
}

int Form::getExecGrade() const
{
    return this->_exec_grade;
}

void Form::beSigned(Bureaucrat &guy)
{
    if (this->_signed)
    {
        std::cout << "Form is already signed" << std::endl;
        return ;
    }
    if (guy.getGrade() <= this->_sign_grade)
    {
        this->_signed = true;
        std::cout << guy.getName() << " signs " << this->_name << std::endl;
    }
    else
    {
        throw Form::GradeTooLowException();
    }
}

const char* Form::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}

std::ostream &operator<<(std::ostream& os, Form const &paper)
{
    os << "Form " << paper.getName() << " is ";
    if (paper.getSigned())
        os << "signed";
    else
        os << "not signed";
    os << " and requires a grade " << paper.getSignGrade() << " to be signed and a grade " << paper.getExecGrade() << " to be executed.\n";
    return os;
}

