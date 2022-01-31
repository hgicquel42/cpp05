/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:35:05 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/31 18:54:37 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

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