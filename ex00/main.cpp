/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 18:38:27 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/31 18:56:52 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int	main(void)
{
	Bureaucrat victor("Victor", 1);
	Bureaucrat bryce("Bryce", 150);

	try
	{
		std::cout << victor << "\n";
		victor.downgrade();
		std::cout << victor << "\n";
		victor.upgrade();
		std::cout << victor << "\n";
		victor.upgrade();
		std::cout << victor << "\n";
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << "\n";
	}

	try
	{
		std::cout << bryce << "\n";
		bryce.upgrade();
		std::cout << bryce << "\n";
		bryce.downgrade();
		std::cout << bryce << "\n";
		bryce.downgrade();
		std::cout << bryce << "\n";
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << "\n";
	}
}