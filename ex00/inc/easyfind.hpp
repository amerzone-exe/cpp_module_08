/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 12:47:32 by jocelyn           #+#    #+#             */
/*   Updated: 2026/03/05 11:58:06 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>

#include <vector>
#include <list>
#include <deque>

template <typename T>
typename T::const_iterator		easyfind( T const & container, int value )
{
	typename T::const_iterator it = std::find(container.begin(), container.end(), value);

	if (it == container.end())
		throw std::out_of_range("Can't find value in container");
	return it;
}

template<typename T>
void	printValues( T const & container )
{
	std::cout << container << " " << std::flush;
}

#endif