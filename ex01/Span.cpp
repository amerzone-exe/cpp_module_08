/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 19:06:55 by jpiquet           #+#    #+#             */
/*   Updated: 2026/03/19 18:03:59 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <exception>
#include <algorithm>

Span::Span( void ) {}

Span::Span( unsigned int N ) : _max(N) {}

Span::Span( Span const & src ) :  _max(src._max)
{
	for (size_t i = 0; i < src._values.size(); i++)
		_values.push_back(src._values[i]);
}

Span & Span::operator=( Span const & rightSide )
{
	if (this != &rightSide)
	{
		_max = rightSide._max;
		for (size_t i = 0; i < rightSide._values.size(); i++)
			_values.push_back(rightSide._values[i]);
	}
	return *this;
}

Span::~Span( void ) {}

void			Span::addNumber( int value )
{
	if (_values.size() >= _max)
		throw std::length_error("Max size reached !");
	_values.push_back(value);
}

unsigned int	Span::shortestSpan( void )
{
	if (_values.empty() || _values.size() == 1)
		throw std::logic_error("Span is empty or contain one value only !");

	int res = std::abs(_values[0] - _values[1]);
	std::sort(_values.begin(), _values.end());
	for(size_t i = 0; i < _values.size() - 1; i++)
	{
		if (std::abs(_values[i] - _values[i + 1]) < res)
			res = std::abs(_values[i] - _values[i + 1]);
	}
	return res;
}

unsigned int	Span::longestSpan( void )
{
	if (_values.empty() || _values.size() == 1)
		throw std::logic_error("Span is empty or contain one value only !");

	std::sort(_values.begin(), _values.end());
	return (std::abs(_values.front() - _values.back()));
}

template <typename it>
void	addRange(it first, it last)
{
	while (first != last)
	{
		addNumber(*first);
		++first;
	}
}