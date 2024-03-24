/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 10:17:29 by rchbouki          #+#    #+#             */
/*   Updated: 2024/02/16 15:04:37 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery", 145, 137), _target("Default")
{
	std::cout << "Shrubbery with target " << _target << " has been created with Default Constructor." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery", 145, 137), _target(target)
{
	std::cout << "Shrubbery with target " << _target << " has been created with Constructor." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& form) : AForm("Shrubbery", 145, 137), _target(form._target)
{
	std::cout << "Shrubbery with target " << _target << " has been created with Copy Constructor." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Shrubbery with target " << _target << " has been destroyed." << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& form)
{
	std::cout << "Copy Assignment Operator has been called." << std::endl;
	if (this != &form)
	{
		_target = form._target;
		this->setSigned(form.getSigned());
	}
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() == false || executor.getGrade() > this->getgradeExec())
		throw ShrubberyCreationForm::ExecutionFailureException();
	else
	{
		std::ofstream outfile((_target + "_shrubbery").c_str());
		if (outfile.is_open())
		{
			std::cout << "File created successfully: " << _target << "_shrubbery" << std::endl;
			outfile << "                                                                                                                                                                                                    \n                                                    %#                        %%%                                                             #%%%%%                                                \n                         ..                              &%.                    %%&%%                                                         #%%&&&%%&%%%%#                   .#%%%%%%%%%%%.          \n               ,###%&&&&&&&&&&###.               ##%%##/ &%%%                  #&&%%&#             /##&&&&&&&&%##%&&&&&&&&##,           /#%%%%%&&&&&&&&&&&%%%               .%%%%%%%&&&&&%%%%%#        \n            ,&&&&&&&&&&&%%%%&&&%%%%%%           %  %%&&%%%&%  %%%%#           &%%&&%&.            %&&&&#&%%%%&&&&&&&&&&%%%&&%          %&&%%&&@%%%%%%%%%%&@&&&&&&           %%&&&&&&&&&&&&&&&&%#       \n          #%%%%&&%%%%%%%%%%&&&%%%%%&&&&%*        .//%%%(&%%%%&&&/&&%%%/       %&&%&&&%&*     .%%%%&&&&&&&&&&&&%%%#%&&&&&&&&&&&&%/     %%&%%&@&%%%%%%%%%%&%%%%%%&@/          &&&&&&&&&&&&&&&&&&&&       \n         %%%&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&      %%&&   ,&&&&&%%%     ,&    .%%&%%%&&&&&,        /&&* .. *#&&&%*##  ,&&&&&&&&&&&&     *%&&&&&&@@@&&&%%%%%%%%%&&&&&%           &&&&&&&&&&&&&&%%%%%%%%    \n       /%%&&&&&&&&&&&&&&&@@&&&&&&&&&&&&&&&&    %%    #%&& ,( %&%%,         .%%%%%&&%%%%,          (###&&&&&&&&&&&&&( (/  *#           &@&%%%%%%%%%&@&@&&&@&&&%&&&&%%      /%%&&&%%%&&&&&&%%%%%%%%%%%%, \n         %&&&&&&&&&&&&&&&&@&&&&&&&&&&&&&@&%     ,   *&&.    #,  &%#        .%&&&@%%%%&%%            ..(/(.    *. /# /(#,,              #%%%&%%%%%%%%%%%%%%&&&@&%%&&&*   (%&&&&&&&&&&&%%%&&&&&&&&&&&&&&%\n        %&&&&&&&&&&&&&&@@@@@@@&&&@@@@@@@@@&         ,%&      #  (&%.       %&@&%%%%%&%%%%#                ##(#* .#%                   %%%%%%%%%%%%%%%%%%%&&%&&&&&&&      &&&&&&&&&&& #&&&&&&&&&&&&&&&&(\n        (@@@@@@@@@@@@@@(/ *.(@@@@@@@@@@@&.           /%%     #   &#         ,%&%%%%%%%%%%                     (##%  (/                 .&&&&&&&&&&&&&&&&&&&&&&&           ,(&&&&&%&. (% #&&&&&&&&&&&&( \n           &@@@@@   %   /%##%#%                              #              (%%%&&%%%%%&&#                      ####.                     ,@&@@@@@ /@@&&&&&&@@                     (#%% *#%            \n                     *####%#%%                              ##             .&&&%%&&&&&&&%%                       /##                             (#%.#*##.                           ###               \n                      .#%##%%                              #%*               ,&&,%@%*                            .####                             *#%% (                            #%                \n                      %####%%#                            (%%                    ,#&                              (###(                            *##%                              #%                \n                   ,,%%//##//(%%*                      ,###%%.                  ,###(                         .,(########(                       ,#####%%                          ,####.              \n   ";
			outfile.close();
		}
		else
			std::cerr << "Error: Unable to create file: " << _target << "_shrubbery" << std::endl;
	}
}
