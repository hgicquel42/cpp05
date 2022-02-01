/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 12:52:51 by hgicquel          #+#    #+#             */
/*   Updated: 2022/02/01 13:20:40 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(void)
{}

Intern::~Intern(void)
{}

Intern::Intern(const Intern&)
{}

Intern& Intern::operator=(const Intern&)
{
	return (*this);
}

Form*	Intern::makeForm(const std::string& name, const std::string& target) const
{
	std::string	names[] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	
	int	i;
	for (i = 0; i < 3; i++)
		if (names[i] == name) break ;
	switch (i)
	{
		case 0: return (new ShrubberyCreationForm(target));
		case 1: return (new RobotomyRequestForm(target));
		case 2: return (new PresidentialPardonForm(target));
		default: 
			std::cout << "Invalid form name" << "\n";
			return (NULL);
	}
}