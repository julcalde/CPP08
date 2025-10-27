/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:44:03 by julcalde          #+#    #+#             */
/*   Updated: 2025/10/27 15:00:58 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int main(void)
{
	// tests with std::vector
	std::vector<int> vec;
	for (int i = 1; i <= 4; i++)
		vec.push_back(i);

	try
	{
		std::vector<int>::iterator iter = easyfind(vec, 3);
		std::cout << "Found value: " << *iter << " at position " << (iter - vec.begin()) << " in vector." << std::endl;
		iter = easyfind(vec, 5);
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	// Tests with std::list
	std::list<int> lst;
	for (int i = 10; i <= 40; i += 10)
		lst.push_back(i);
	
	try
	{
		std::list<int>::iterator iter = easyfind(lst, 20);
		std::cout << "AAAFound value: " << *iter << " in list." << std::endl;
		iter = easyfind(lst, 40);
		std::cout << "BBBFound value: " << *iter << " in list." << std::endl;
		iter = easyfind(lst, 60);
		std::cout << "CCCFound value: " << *iter << " in list." << std::endl;
		iter = easyfind(lst, 40);
		std::cout << "DDDFound value: " << *iter << " in list." << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return (0);
}
