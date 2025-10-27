/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:08:08 by julcalde          #+#    #+#             */
/*   Updated: 2025/10/27 21:07:56 by julcalde         ###   ########.fr       */
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

/*
	addNumber: Adds a single number to the Span.
*/
void Span::addNumber(int num)
{
	if (_numbers.size() >= _maxSize)
		throw std::runtime_error("Span is full");
	_numbers.push_back(num);
}

/*
	addNumber (template): Adds a range of numbers to the Span.
*/
template <typename Iter>
void Span::addNumber(Iter begin, Iter end)
{
	size_t count = std::distance(begin, end);
	if (_numbers.size() + count > _maxSiza)
		throw std::runtime_error("Max capacity exceeded");
	_numbers.insert(_numbers.end(), begin, end);
}

/*
	shortestSpan: Finds the shortest span (or distance) between any two numbers in the Span.
*/
int Span::shortestSpan() const
{
	if (_numbers.size() <= 1)
		throw std::runtime_error("Not enough numbers to find a span");
	std::vector<int> sorted = _numbers;
	std::sort(sorted.begin(), sorted.end());
	int minSpan = std::abs(sorted[1] - sorted[0]);
	for (size_t i = 2; i < sorted.size(); ++i)
	{
		int span = std::abs(sorted[i] - sorted[i - 1]);
		if (span < minSpan)
			minSpan = span;
	}
	return (minSpan);
}

/*
	longestSpan: Finds the longest span (or distance) between any two numbers in the Span.
*/
int Span::longestSpan() const
{
	if (_numbers.size() <= 1)
		throw std::runtime_error("Not enough numbers to find a span");
	std::vector<int> sorted = _numbers;
	std::sort(sorted.begin(), sorted.end());
	return (std::abs(sorted.back() - sorted.front()));
}
