/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 18:56:48 by jpiquet           #+#    #+#             */
/*   Updated: 2026/03/31 09:27:13 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


template <typename T>
MutantStack<T>::MutantStack( void ) : std::stack<T>()
{}

template <typename T>
MutantStack<T>::MutantStack( MutantStack const & src ) : std::stack<T>(src)
{}

template <typename T>
MutantStack<T> & MutantStack<T>::operator=(MutantStack<T> const &rightSide)
{
	if (this != &rightSide)
	{
		this->std::stack<T>::operator=();
	}
	return *this;
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin( void )
{
	return this->std::stack<T>::c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end( void )
{
	return this->std::stack<T>::c.end();
}

template <typename T>
MutantStack<T>::~MutantStack( void ) {}
