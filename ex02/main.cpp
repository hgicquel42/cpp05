/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 18:38:27 by hgicquel          #+#    #+#             */
/*   Updated: 2022/02/01 12:45:57 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int	main(void)
{
	std::srand(std::time(NULL));
	
	Bureaucrat victor("Victor", 1);
	Bureaucrat bryce("Bryce", 150);

	ShrubberyCreationForm b27("lol");

	std::cout << "--- Form B27 ---" << "\n\n";

	std::cout << b27 << "\n\n";

	victor.signForm(b27);
	std::cout << "\n";

	std::cout << b27 << "\n\n";

	bryce.executeForm(b27);
	std::cout << "\n";

	std::cout << b27 << "\n\n";

	victor.executeForm(b27);
	std::cout << "\n";

	RobotomyRequestForm b28("Bryce");

	std::cout << "--- Form B28 ---" << "\n\n";

	std::cout << b28 << "\n\n";

	victor.signForm(b28);
	std::cout << "\n";
	
	std::cout << b28 << "\n\n";

	bryce.executeForm(b28);
	std::cout << "\n";

	std::cout << b28 << "\n\n";
	
	victor.executeForm(b28);
	std::cout << "\n";

	PresidentialPardonForm b29("Abdou");

	std::cout << "--- Form B29 ---" << "\n\n";

	std::cout << b29 << "\n\n";

	victor.signForm(b29);
	std::cout << "\n";

	std::cout << b29 << "\n\n";

	bryce.executeForm(b29);
	std::cout << "\n";

	std::cout << b29 << "\n\n";

	victor.executeForm(b29);
	std::cout << "\n";
}