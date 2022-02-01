/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 11:17:21 by hgicquel          #+#    #+#             */
/*   Updated: 2022/02/01 12:34:33 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	private:
		std::string target;
	public:
		ShrubberyCreationForm(const std::string& target);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm(const ShrubberyCreationForm& from);
		ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& from);
		void					execute(const Bureaucrat& b);

		class FileNotOpenException: public std::exception
		{
			public:
				FileNotOpenException(void) throw();
				virtual const char* 	what() const throw();
		};
};