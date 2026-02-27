/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocelyn <jocelyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 12:50:28 by jocelyn           #+#    #+#             */
/*   Updated: 2026/02/27 13:16:13 by jocelyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

- Creer un template function dans le .hpp
- Considerer que T est un container
- Tester avec plusieur container possible
- Se renseigner sur les containers

*/

#include <algorithm>
#include <vector>
#include <list>
#include <deque>
#include <iostream>

template <typename T>
typename T::const_iterator		easyfind( T const & container, int value )
{
	typename T::const_iterator it = find(container.begin(), container.end(), value);
	if (it == container.end())
		throw std::exception.what("Can't find value in container");
	return it;
}

int main()
{
	std::vector<int> 			container(5);
	std::vector<int>::iterator	it;

	container = {10, 12, 18, 20, 3};
	try
	{
		easyfind(container, 20);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}