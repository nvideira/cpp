/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvideira <nvideira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 11:45:14 by nvideira          #+#    #+#             */
/*   Updated: 2024/03/17 22:13:55 by nvideira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    Bureaucrat b1 = Bureaucrat("Hermes", 36);
    std::cout << b1;
    Form f1 = Form("Form1", 36, 36);
    std::cout << f1;
    b1.signForm(f1);
    std::cout << f1;
    b1.signForm(f1);
    b1.incrementGrade(2);
    std::cout << b1;
    Bureaucrat b2 = Bureaucrat("Farnsworth", 150);
    std::cout << b2;
    Form f2 = Form("Form2", 149, 36);
    std::cout << f2;
    b2.signForm(f2);
    std::cout << f2;
    b2.incrementGrade(1);
    std::cout << b2;
    b2.signForm(f2);
}