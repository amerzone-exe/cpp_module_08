/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 12:50:28 by jocelyn           #+#    #+#             */
/*   Updated: 2026/03/12 19:04:35 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	std::cout << "/*--------VECTOR---------*/" << std::endl;
	std::vector<int> 			vector(10);
	srand(time(NULL));

	std::generate(vector.begin(), vector.end(), generateValue);


	std::for_each(vector.begin(), vector.end(), printValues);
	NLINE

	try
	{
		std::cout << "Looking for value = 15" << std::endl;
		std::vector<int>::const_iterator it = easyfind(vector, 15);
		std::cout << "Value : " << *it << " found !" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	NLINE

	std::cout << "/*--------LIST---------*/" << std::endl;
	std::list<int>		list(10);
	std::generate(list.begin(), list.end(), generateValue);
	std::for_each(list.begin(), list.end(), printValues);
	NLINE
	
	try
	{
		std::cout << "Looking for value = 5" << std::endl;
		std::list<int>::const_iterator it = easyfind(list, 5);
		std::cout << "Value : " << *it << " found !" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	NLINE

	std::cout << "/*--------DEQUE---------*/" << std::endl;
	std::deque<int>		deque(10);
	std::generate(deque.begin(), deque.end(), generateValue);
	std::for_each(deque.begin(), deque.end(), printValues);
	NLINE
	
	try
	{
		std::cout << "Looking for value = 9" << std::endl;
		std::deque<int>::const_iterator it = easyfind(deque, 9);
		std::cout << "Value : " << *it << " found !" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	NLINE

	return 0;
}