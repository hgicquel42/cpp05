/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:58:26 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/31 18:56:10 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(const std::string& name, int grade):
	name(name),
	grade(grade)
{
	if (this->grade < 1)
		throw GradeTooHighException();
	if (this->grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& from):
	name(from.name),
	grade(from.grade)
{
	if (this->grade < 1)
		throw GradeTooHighException();
	if (this->grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat(void)
{}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& from)
{
	this->grade = from.grade;
	return (*this);
}

const std::string&	Bureaucrat::getName(void) const
{
	return (this->name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

void	Bureaucrat::upgrade(void)
{
	if (this->grade == 1)
		throw GradeTooHighException();
	this->grade--;
}

void	Bureaucrat::downgrade(void)
{
	if (this->grade == 150)
		throw GradeTooLowException();
	this->grade++;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(void) throw():
	std::exception()
{}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

Bureaucrat::GradeTooHighException::GradeTooHighException(void) throw():
	std::exception()
{}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& it)
{
	out << it.getName() << ", ";
	out << "bureaucrat grade" << " ";
	out << it.getGrade() << ".";
	return (out);
}