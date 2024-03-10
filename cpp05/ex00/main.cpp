/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvideira <nvideira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 01:33:04 by nvideira          #+#    #+#             */
/*   Updated: 2024/03/10 19:39:55 by nvideira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    try{
        Bureaucrat b1 = Bureaucrat("Hermes", 36);
        std::cout << b1;
        b1.decrementGrade(2);
        std::cout << b1;
        b1.incrementGrade(2);
        std::cout << b1;
    }
    catch (std::exception &e)
    {
        std::cout << "Error!" << std::endl;
    }
    try{
        Bureaucrat b2 = Bureaucrat("Farnsworth", 151);
        std::cout << b2;
    }
    catch (std::exception &e)
    {
        std::cout << "Error!" << std::endl;
    }
    try{
        Bureaucrat b3 = Bureaucrat("Zoidberg", 0);
        std::cout << b3;
    }
    catch (std::exception &e)
    {
        std::cout << "Error!" << std::endl;
    }
    try{
        Bureaucrat b4 = Bureaucrat("Fry", 150);
        std::cout << b4;
        b4.decrementGrade(1);
        std::cout << b4;
    }
    catch (std::exception &e)
    {
        std::cout << "Error!" << std::endl;
    }
    try{
        Bureaucrat b5 = Bureaucrat("Supreme Councelor", 1);
        std::cout << b5;
        b5.incrementGrade(1);
        std::cout << b5;
    }
    catch (std::exception &e)
    {
        std::cout << "Error!" << std::endl;
    }
}

    
    //std::cout << b1.getName() << " has a grade of " << b1.getGrade() << std::endl;
    //std::cout << b2.getName() << " has a grade of " << b2.getGrade() << std::endl;
    //std::cout << b3.getName() << " has a grade of " << b3.getGrade() << std::endl;
    //std::cout << b4.getName() << " has a grade of " << b4.getGrade() << std::endl;
    //std::cout << b5.getName() << " has a grade of " << b5.getGrade() << std::endl;
    
    //b1.incrementGrade(5);
    //b2.decrementGrade(5);
    //b3.incrementGrade(5);
    //b4.decrementGrade(5);
    //b5.incrementGrade(5);

  //  std::cout << b1.getName() << " has a grade of " << b1.getGrade() << std::endl;
    //std::cout << b2.getName() << " has a grade of " << b2.getGrade() << std::endl;
    //std::cout << b3.getName() << " has a grade of " << b3.getGrade() << std::endl;
    //std::cout << b4.getName() << " has a grade of " << b4.getGrade() << std::endl;
    //std::cout << b5.getName() << " has a grade of " << b5.getGrade() << std::endl;
//    }
//    catch (std::exception &e)
//    {
//        std::cout << e.what() << std::endl;
 //   }
