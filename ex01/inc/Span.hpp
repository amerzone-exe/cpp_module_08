/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 19:06:51 by jpiquet           #+#    #+#             */
/*   Updated: 2026/03/19 18:35:25 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>

class Span
{
    public:
        Span( void );
		Span( unsigned int N );
		Span( Span const & src );
		Span & operator=( Span const & rightSide );
        ~Span( void );

		void	addNumber( int value );

		template <typename it>
		void	addRange(it first, it last)
		{
			while (first != last)
			{
				addNumber(*first);
				++first;
			}
		}

		unsigned int shortestSpan( void );
		unsigned int longestSpan( void );

	private:
		std::vector<int>	_values;
		unsigned int		_max;
};

#endif
