/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 18:38:27 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/31 19:37:26 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int	main(void)
{
	Bureaucrat victor("Victor", 1);
	Bureaucrat bryce("Bryce", 150);

	Form	b1("28B", 10, 1);
	Form	b2(b1);

	std::cout << b1 << "\n";
	victor.signForm(b1);
	std::cout << b1 << "\n";

	std::cout << b2 << "\n";
	bryce.signForm(b2);
	std::cout << b2 << "\n";
}