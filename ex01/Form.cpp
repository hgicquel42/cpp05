/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:18:18 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/31 19:37:51 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <iostream>

Form::Form(const std::string& name, int sgrade, int xgrade):
	name(name),
	value(false),
	sgrade(sgrade),
	xgrade(xgrade)
{
	if (sgrade < 1 || xgrade < 1)
		throw GradeTooHighException();
	if (sgrade > 150 || xgrade > 150)
		throw GradeTooLowException();
}

Form::Form(const Form& from):
	name(from.name),
	value(from.value),
	sgrade(from.sgrade),
	xgrade(from.xgrade)
{}

Form::~Form(void)
{}

Form& Form::operator=(const Form& from)
{
	this->value = from.value;
	return (*this);
}

const std::string&	Form::getName(void) const
{
	return (this->name);
}

bool	Form::getValue(void) const
{
	return (this->value);
}

int		Form::getSignGrade(void) const
{
	return (this->sgrade);
}

int		Form::getExecuteGrade(void) const
{
	return (this->xgrade);
}

void	Form::beSigned(const Bureaucrat& b)
{
	if (b.getGrade() > this->sgrade)
		throw GradeTooLowException();
	this->value = true;
}

Form::GradeTooLowException::GradeTooLowException(void) throw():
	std::exception()
{}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

Form::GradeTooHighException::GradeTooHighException(void) throw():
	std::exception()
{}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

std::ostream&	operator<<(std::ostream& out, const Form& it)
{
	out << "Form" << " ";
	out << it.getName() << ", ";
	if (it.getValue())
		out << "signed" << ", ";
	else
		out << "unsigned" << ", ";
	out << "sign grade" << " ";
	out << it.getSignGrade() << ", ";
	out << "execute grade" << " ";
	out << it.getExecuteGrade() << ".";
	return (out);
}