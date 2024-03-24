/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:12:32 by rchbouki          #+#    #+#             */
/*   Updated: 2023/11/30 22:53:09 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl	mainExample = Harl();
	mainExample.complain("INFO");
	mainExample.complain("WARNING");
	mainExample.complain("DEBUG");
	mainExample.complain("ERROR");
	mainExample.complain("WOW");
}
