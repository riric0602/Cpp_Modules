/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:13:04 by rchbouki          #+#    #+#             */
/*   Updated: 2023/12/05 10:52:09 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL_H__
#define __HARL_H__

#include <iostream>

class Harl
{
	private:
		void	debug();
		void	info();
		void	warning();
		void	error();
	public:
		Harl();
		~Harl();
		void	complain(std::string level);
		enum	option
		{
			DEBUG,
			INFO,
			WARNING,
			ERROR,
			NONE
		};
		struct levelInfo 
		{
			std::string		level;
			option			levelOption;
		};
};

#endif
