/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvideira <nvideira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 23:41:30 by nvideira          #+#    #+#             */
/*   Updated: 2024/03/07 08:52:13 by nvideira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name)
{
    try 
    {
        if (grade < 1)
            throw GradeTooHighException();
        else if (grade > 150)
            throw GradeTooLowException();
        else
            this->_grade = grade;
    }
    catch (int e)
    {
        std::cout << "Error: " << e << std::endl;
    }
    std::cout << "Default constructor called for " << this->_name << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(src._name)
{
    std::cout << "Copy constructor called for " << this->_name << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor called for " << this->_name << std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
    if (this != &rhs)
    {
        this->_grade = rhs._grade;
    }
    return *this;
}

std::string const Bureaucrat::getName() const
{
    return this->_name;
}

int Bureaucrat::getGrade() const
{
    return this->_grade;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}

void Bureaucrat::incrementGrade(int amount)
{
    this->_grade -= amount;
    try {
        if (this->_grade < 1)
            throw GradeTooHighException();
        else
            std::cout << this->_name << " has been promoted to grade " << this->_grade << std::endl;
    }
    catch (int e)
    {
        std::cout << "Error: " << e << std::endl;
    }
}

void   Bureaucrat::decrementGrade(int amount)
{
    this->_grade += amount;
    try {
        if (this->_grade > 150)
            throw GradeTooLowException();
        else
            std::cout << this->_name << " has been demoted to grade " << this->_grade << std::endl;
    }
    catch (int e)
    {
        std::cout << "Error: " << e << std::endl;
    }
}

std::ostream &operator<<(std::ostream& os, Bureaucrat const& dude)
{
    std::cout << "Hello. I'm " << dude.getName() << " and I'm a bureaucrat. My grade is " << dude.getGrade() << std::endl;
    return (os);
}