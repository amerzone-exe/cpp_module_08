/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 18:56:45 by jpiquet           #+#    #+#             */
/*   Updated: 2026/03/24 20:42:25 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <cstdlib>

template <typename T>
class MutantStack
{
    public:
        MutantStack( void );
		MutantStack( MutantStack const & src );
		MutantStack & operator=( MutantStack const & rightSide );
        ~MutantStack( void );

		bool	empty( void ) const;
		size_t	size( void ) const;
		
		T const &	top( void ) const;

		void	push( T const & newElement );
		void	pop( void );

	private:
		T*		_array;
		size_t	_size;
};

#include "MutantStack.tpp"

#endif
