/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:08:08 by julcalde          #+#    #+#             */
/*   Updated: 2025/10/27 15:19:23 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

Span::Span(unsigned int N) : _maxSize(N)
{
	std::cout << "Default Span constructor of size " << N << " created." << std::endl;
}

Span::Span(const Span& other) : _maxSize(other._maxSize), _numbers(other._numbers)
{
	std::cout << "Copy Span constructor called." << std::endl;
}

Span& Span::operator=(const Span& other)
{
	if (this != &other)
	{
		_maxSize = other._maxSize;
		_numbers = other._numbers;
	}
	return (*this);
}

Span::~Span()
{
	std::cout << "Span destructor called." << std::endl;
}