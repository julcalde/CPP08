/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:44:03 by julcalde          #+#    #+#             */
/*   Updated: 2025/10/27 14:50:29 by julcalde         ###   ########.fr       */
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
	return (0);
}
