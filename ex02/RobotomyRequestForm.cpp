/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 11:18:44 by hgicquel          #+#    #+#             */
/*   Updated: 2022/02/01 11:43:38 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(const std::string& target):
	Form("RobotomyRequestForm", 72, 45),
	target(target)
{}

RobotomyRequestForm::~RobotomyRequestForm(void)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& from):
	Form(from),
	target(from.target)
{}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& from)
{
	this->Form::operator=(from);
	this->target = from.target;
	return (*this);
}

void	RobotomyRequestForm::execute(const Bureaucrat& b)
{
	if (!this->getValue())
		throw FormNotSignedException();
	if (b.getGrade() > this->getExecuteGrade())
		throw GradeTooLowException();
	std::cout << "* DRILLING NOISE *" << "\n";
	if (std::rand() % 2)
	{
		std::cout << "The robotomy failed!" << "\n";
		return ;
	}
	std::cout << this->target << " ";
	std::cout << "has been robotomized!" << "\n";
}