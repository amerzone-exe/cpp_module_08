/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 14:13:26 by jpiquet           #+#    #+#             */
/*   Updated: 2026/03/19 19:04:44 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <algorithm>
#include <cstdlib>

#define NLINE std::cout << std::endl;

void	printValues( int value )
{
	std::cout << value << " " << std::flush;
}

int	generateValue()
{
	return rand() % 10000000;
}

int main()
{
	try
	{
		Span test = Span(5);
		srand(time(NULL));
		
		test.addNumber(-5);
		test.addNumber(10);
		test.addNumber(13);
		test.addNumber(15);
		test.addNumber(20);
		
		std::cout << "Longest span : " << test.longestSpan() << std::endl;
		std::cout << "Shortest span : " << test.shortestSpan() << std::endl;
		NLINE
		
		std::vector<int> bigArray(1000);
		
		std::generate(bigArray.begin(), bigArray.end(), generateValue);
		std::for_each(bigArray.begin(), bigArray.end(), printValues);
		NLINE
		
		Span bigSpan(1000);
		bigSpan.addRange(bigArray.begin(), bigArray.end());
		std::cout << "Longest span : " << bigSpan.longestSpan() << std::endl;
		std::cout << "Shortest span : " << bigSpan.shortestSpan() << std::endl;
		NLINE
		
		std::cout << "---------COPY----------" << std::endl;
		Span cpy(bigSpan);
		// cpy.addNumber(-5);
		
		std::cout << "Longest span : " << cpy.longestSpan() << std::endl;
		std::cout << "Shortest span : " << cpy.shortestSpan() << std::endl;
		NLINE

		std::cout << "---------ASSIGN----------" << std::endl;
		Span assign;

		assign = cpy;
		std::cout << "Longest span : " << assign.longestSpan() << std::endl;
		std::cout << "Shortest span : " << assign.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
