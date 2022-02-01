/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 11:17:21 by hgicquel          #+#    #+#             */
/*   Updated: 2022/02/01 12:58:54 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"

class RobotomyRequestForm: public Form
{
	private:
		std::string target;
	public:
		RobotomyRequestForm(const std::string& target);
		~RobotomyRequestForm(void);
		RobotomyRequestForm(const RobotomyRequestForm& from);
		RobotomyRequestForm&	operator=(const RobotomyRequestForm& from);
		void					execute(const Bureaucrat& b) const;
};