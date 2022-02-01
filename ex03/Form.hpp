/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:00:39 by hgicquel          #+#    #+#             */
/*   Updated: 2022/02/01 12:58:47 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Form;

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

class Form
{
	private:
		const std::string	name;
		bool				value;
		const int			sgrade;
		const int			xgrade;
	
	protected:
		Form(const std::string& name, int sgrade, int xgrade);
		Form(const Form& from);

	public:
		virtual ~Form(void);
		Form&				operator=(const Form& from);
		const std::string&	getName(void) const;
		bool				getValue(void) const;
		int					getSignGrade(void) const;
		int					getExecuteGrade(void) const;
		void				beSigned(const Bureaucrat& b);
		virtual void		execute(const Bureaucrat& b) const = 0;

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

		class FormNotSignedException: public std::exception
		{
			public:
				FormNotSignedException(void) throw();
				virtual const char* 	what() const throw();
		};
};

std::ostream&	operator<<(std::ostream& out, const Form& it);