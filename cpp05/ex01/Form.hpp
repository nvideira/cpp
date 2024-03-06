/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvideira <nvideira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 04:34:59 by nvideira          #+#    #+#             */
/*   Updated: 2024/03/06 04:48:39 by nvideira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
 
class Form {
    private:
        std::string const   _name;
        bool                _signed;
        int const           _sign_grade;
        int const           _exec_grade;
    
    public:
        Form(std::string const _name, bool _signed, int const _sign_grade, int const _exec_grade);
        ~Form();
        Form(Form const &src);
        Form &operator=(Form const &rhs);
        
};

#endif