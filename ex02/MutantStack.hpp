/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 18:56:45 by jpiquet           #+#    #+#             */
/*   Updated: 2026/03/31 09:34:53 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <cstdlib>
#include <stack>


template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack( void );
		MutantStack( MutantStack const & src );
		MutantStack & operator=( MutantStack const & rightSide );
        ~MutantStack( void );
		
		typedef typename std::stack<T>::container_type::iterator iterator;

		typename MutantStack<T>::iterator begin( void );
		typename MutantStack<T>::iterator end( void );

};

#include "MutantStack.tpp"

#endif
