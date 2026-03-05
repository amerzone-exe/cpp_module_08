/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 12:50:28 by jocelyn           #+#    #+#             */
/*   Updated: 2026/03/05 11:57:33 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

- Creer un template function dans le .hpp
- Considerer que T est un container
- Tester avec plusieur container possible
- Se renseigner sur les containers

*/

#include <iostream>
#include <easyfind.hpp>
#include <cstdlib>

#define NLINE std::cout << std::endl;

int	generateValue()
{
	return rand() % 20;
}

int main()
{
	std::vector<int> 			container(10);
	srand(time(NULL));

	std::generate(container.begin(), container.end(), generateValue);
	// for (unsigned int i = 0; i < 10; i++)
	// {
	// 	container.push_back(generateValue());
	// 	std::cout << i << std::endl;
	// }

	// container.push_back(5);
	// std::fill(container.begin(), container.end(), generateValue());
	// for(it = container.begin(); it != container.end(); it++)
	// 	container.insert(it, generateValue());

	std::for_each(container.begin(), container.end(), printValues);
	NLINE

	try
	{
		std::vector<int>::const_iterator it = easyfind(container, 15);
		std::cout << "Value : " << *it << " found !" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	// std::list 

	return 0;
}