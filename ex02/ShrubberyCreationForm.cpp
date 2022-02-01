/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 11:18:44 by hgicquel          #+#    #+#             */
/*   Updated: 2022/02/01 12:47:35 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target):
	Form("ShrubberyCreationForm", 145, 137),
	target(target)
{}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& from):
	Form(from),
	target(from.target)
{}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& from)
{
	this->Form::operator=(from);
	this->target = from.target;
	return (*this);
}

void	ShrubberyCreationForm::execute(const Bureaucrat& b)
{
	if (!this->getValue())
		throw FormNotSignedException();
	if (b.getGrade() > this->getExecuteGrade())
		throw GradeTooLowException();
	std::ifstream in(std::string("shrubbery.txt").c_str(), std::ios::binary);
	std::ofstream out((this->target+"_shrubbery").c_str(), std::ios::binary);
	if (!in || !out)
		throw FileNotOpenException();
	out << in.rdbuf();
}

ShrubberyCreationForm::FileNotOpenException::FileNotOpenException(void) throw():
	std::exception()
{}

const char* ShrubberyCreationForm::FileNotOpenException::what() const throw()
{
	return ("Can't open file");
}