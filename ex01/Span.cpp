/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 19:06:55 by jpiquet           #+#    #+#             */
/*   Updated: 2026/03/12 19:32:50 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <exception>

Span::Span( void ) {}

Span::Span( unsigned int N ) : _values(N) {}

Span::Span( Span const & src )
{
	// std::cout << "Copy constructor called" << std::endl;
}

Span & Span::operator=( Span const & rightSide )
{
	if (this != &rightSide)
	return *this;
}

Span::~Span( void ) {}

void			Span::addNumber( int value )
{
	if (this->_values.size() >= this->_max)
		throw std::length_error("Max size reached !");
	this->_values.emplace_back(value);
}

unsigned int	Span::shortestSpan( void )
{
	
}

unsigned int	Span::longestSpan( void )
{
	
}
