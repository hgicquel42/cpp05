/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 12:50:38 by hgicquel          #+#    #+#             */
/*   Updated: 2022/02/01 13:00:27 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"
#include <string>

class Intern
{
	public:
		Intern(void);
		~Intern(void);
		Intern(const Intern& from);
		Intern&	operator=(const Intern& from);
		Form*	makeForm(const std::string& name, const std::string& target) const;
};