/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 11:18:44 by hgicquel          #+#    #+#             */
/*   Updated: 2022/02/01 12:58:30 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(const std::string& target):
	Form("PresidentialPardonForm", 25, 5),
	target(target)
{}

PresidentialPardonForm::~PresidentialPardonForm(void)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& from):
	Form(from),
	target(from.target)
{}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& from)
{
	this->Form::operator=(from);
	this->target = from.target;
	return (*this);
}

void	PresidentialPardonForm::execute(const Bureaucrat& b) const
{
	if (!this->getValue())
		throw FormNotSignedException();
	if (b.getGrade() > this->getExecuteGrade())
		throw GradeTooLowException();
	std::cout << this->target << " ";
	std::cout << "has been pardoned by" << " ";
	std::cout << "Zaphod Beeblebrox!" << "\n";
}