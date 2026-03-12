/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 19:06:51 by jpiquet           #+#    #+#             */
/*   Updated: 2026/03/12 19:29:10 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <list>

class Span
{
    public:
        Span( void );
		Span( unsigned int N );
		Span( Span const & src );
		Span & operator=( Span const & rightSide );
        ~Span( void );

		void	addNumber( int value );

		unsigned int shortestSpan( void );
		unsigned int longestSpan( void );

	private:
		std::list<int>	_values;
		unsigned int	_max;
};

#endif
