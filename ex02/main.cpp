/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 18:58:39 by jpiquet           #+#    #+#             */
/*   Updated: 2026/03/24 20:38:54 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>
#include "MutantStack.hpp"
#include <iostream>

int main(void)
{
	// std::stack<int> test;
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	
	std::cout << mstack.top() << std::endl;
	
	mstack.pop();
	
	std::cout << mstack.size() << std::endl;
	
	return 0;
}
