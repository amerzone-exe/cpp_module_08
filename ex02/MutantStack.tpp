/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 18:56:48 by jpiquet           #+#    #+#             */
/*   Updated: 2026/03/24 21:12:58 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>

template <typename T>
MutantStack<T>::MutantStack( void ) : _array(NULL), _size(0) {}

template <typename T>
MutantStack<T>::MutantStack( MutantStack const & src ) : _size(src._size)
{
	this->_array = new T[src._size];
	for (size_t i = 0; i < src._size; i++)
		this->_array[i] = src._array[i];
}

template <typename T>
MutantStack<T> & MutantStack<T>::operator=(MutantStack<T> const &rightSide)
{
	if (this != &rightSide)
	{
		this->_size = rightSide._size;
		if (this->_array != NULL)
			delete[] this->_array;
		this->_array = new T[rightSide._size];
		for (size_t i = 0; i < rightSide._size; i++)
			this->_array[i] = rightSide._array[i];
	}
	return *this;
}

template <typename T>
bool	MutantStack<T>::empty( void ) const
{
	if (!_size)
		return true;
	return false;
}

template <typename T>
size_t	MutantStack<T>::size( void ) const
{
	return _size;
}

template <typename T>
T const &	MutantStack<T>::top( void ) const
{
	return _array[_size - 1];
}

template <typename T>
void	MutantStack<T>::push( T const & newElement )
{
	++_size;
	if (_array != NULL)
	{
		_array = new T[_size];
		_array[_size] = newElement;
	}
	_array = new T[_size];
	_array[_size] = newElement;
}

template <typename T>
void	MutantStack<T>::pop( void )
{
	_array[_size] = NULL;
	--_size;
}

template <typename T>
MutantStack<T>::~MutantStack( void )
{
	if (this->_array != NULL)
		delete[] this->_array;
}
