/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 21:37:16 by julcalde          #+#    #+#             */
/*   Updated: 2025/10/28 15:49:00 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main(void)
{
	// Guidelines example test
	std::cout << "--- Guidelines example test ---" << std::endl;
	MutantStack<int> mustache; // create a MutantStack of integers
	mustache.push(5); // bottom of the stack and first element
	mustache.push(17);
	std::cout << mustache.top() << std::endl; // 17
	mustache.pop(); // removes 17 from the top of the stack
	std::cout << mustache.size() << std::endl; // 1
	mustache.push(3);
	mustache.push(5);
	mustache.push(737);
	mustache.push(0);
	MutantStack<int>::iterator it = mustache.begin(); // points to 5
	MutantStack<int>::iterator ite = mustache.end(); // points to one past 0
	++it; // points to 3
	--it; // points back to 5
	while (it != ite) // iterate through the stack
	{
		std::cout << *it << std::endl;
		++it;
	}
	
	// Comparison with std::list
	std::cout << "--- Comparison with std::list ---" << std::endl;
	std::list<int> lst; // create a list of integers
	lst.push_back(5); // bottom of the list and first element
	lst.push_back(17);
	std::cout << lst.back() << std::endl; // 17
	lst.pop_back(); // removes 17 from the top of the list
	std::cout << lst.size() << std::endl; // 1
	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);
	lst.push_back(0);
	std::list<int>::iterator lst_it = lst.begin(); // points to 5
	std::list<int>::iterator lst_ite = lst.end(); // points to one past 0
	++lst_it; // points to 3
	--lst_it; // points back to 5
	while (lst_it != lst_ite) // iterate through the list
	{
		std::cout << *lst_it << std::endl;
		++lst_it;
	}
	
	// this part is to test the copy constructor
	std::cout << "--- Copy constructor test ---" << std::endl;
	std::stack<int> s(mustache); // create a standard stack by copying mustache
	while (!s.empty()) // iterate through the stack
	{
		std::cout << s.top() << std::endl; // print the top element
		s.pop(); // remove the top element
	}
	
	return (0);
}