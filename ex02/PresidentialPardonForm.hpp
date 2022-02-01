/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 11:17:21 by hgicquel          #+#    #+#             */
/*   Updated: 2022/02/01 11:45:07 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"

class PresidentialPardonForm: public Form
{
	private:
		std::string target;
	public:
		PresidentialPardonForm(const std::string& target);
		~PresidentialPardonForm(void);
		PresidentialPardonForm(const PresidentialPardonForm& from);
		PresidentialPardonForm&	operator=(const PresidentialPardonForm& from);
		void					execute(const Bureaucrat& b);
};