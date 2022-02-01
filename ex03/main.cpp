/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 18:38:27 by hgicquel          #+#    #+#             */
/*   Updated: 2022/02/01 13:21:12 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <iostream>
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

int	main(void)
{
	std::srand(std::time(NULL));
	
	Intern intern;
	
	Bureaucrat victor("Victor", 1);
	Bureaucrat bryce("Bryce", 150);

	std::cout << "--- Form B27 ---" << "\n\n";

	Form* b27 = intern.makeForm("shrubbery creation", "lol");

	if (b27)
	{
		std::cout << *b27 << "\n\n";

		victor.signForm(*b27);
		std::cout << "\n";

		std::cout << *b27 << "\n\n";

		bryce.executeForm(*b27);
		std::cout << "\n";

		std::cout << *b27 << "\n\n";

		victor.executeForm(*b27);
		std::cout << "\n";

		delete b27;
	}

	std::cout << "--- Form B28 ---" << "\n\n";

	Form* b28 = intern.makeForm("robotomy request", "Bryce");

	if (b28)
	{
		std::cout << *b28 << "\n\n";

		victor.signForm(*b28);
		std::cout << "\n";
		
		std::cout << *b28 << "\n\n";

		bryce.executeForm(*b28);
		std::cout << "\n";

		std::cout << *b28 << "\n\n";
		
		victor.executeForm(*b28);
		std::cout << "\n";

		delete b28;
	}

	std::cout << "--- Form B29 ---" << "\n\n";

	Form* b29 = intern.makeForm("presidential pardon", "Abdou");

	if (b29)
	{
		std::cout << *b29 << "\n\n";

		victor.signForm(*b29);
		std::cout << "\n";

		std::cout << *b29 << "\n\n";

		bryce.executeForm(*b29);
		std::cout << "\n";

		std::cout << *b29 << "\n\n";

		victor.executeForm(*b29);
		std::cout << "\n";

		delete b29;
	}

	std::cout << "--- Form B30 ---" << "\n\n";

	Form* b30 = intern.makeForm("lol", "lol");

	if (b30)
	{
		std::cout << "This should not have happened" << "\n";
		delete b30;
	}
}