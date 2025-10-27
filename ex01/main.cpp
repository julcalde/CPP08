/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:08:10 by julcalde          #+#    #+#             */
/*   Updated: 2025/10/27 21:28:05 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

int main(void)
{
	// Guidelines main test
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	
	try
	{
		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	// Test with 10k numbers
	Span largeSpan = Span(10000);
	std::vector<int> numbers;
	srand(time(0));
	for (int i = 0; i < 10000; i++)
	{
		numbers.push_back(rand() % 100000);
	}
	try
	{
		largeSpan.addNumber(numbers.begin(), numbers.end());
		std::cout << "Large Span - Shortest Span: " << largeSpan.shortestSpan() << std::endl;
		std::cout << "Large Span - Longest Span: " << largeSpan.longestSpan() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	// Exception testing
	Span smallSpan = Span(1);
	try
	{
		smallSpan.addNumber(1);
		smallSpan.addNumber(2); // This should throw an exception
	}
	catch (const std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	try
	{
		smallSpan.shortestSpan(); // This should throw an exception
	}
	catch (const std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}	

	return (0);
}