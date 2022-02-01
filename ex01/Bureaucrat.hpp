/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:35:05 by hgicquel          #+#    #+#             */
/*   Updated: 2022/02/01 12:57:33 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Bureaucrat;

#include "Form.hpp"
#include <string>
#include <iostream>

class Bureaucrat
{
	private:
		const std::string	name;
		int					grade;
	public:
		Bureaucrat(const std::string& name, int grade);
		~Bureaucrat(void);
		Bureaucrat(const Bureaucrat& from);
		Bureaucrat&	operator=(const Bureaucrat& from);
		const std::string&	getName() const;
		int					getGrade() const;
		void				upgrade(void);
		void				downgrade(void);
		void				signForm(Form& form) const;
		
		class GradeTooLowException: public std::exception
		{
			public:
				GradeTooLowException(void) throw();
				virtual const char* 	what() const throw();
		};

		class GradeTooHighException: public std::exception
		{
			public:
				GradeTooHighException(void) throw();
				virtual const char* 	what() const throw();
		};
};

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& it);