/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 21:37:16 by julcalde          #+#    #+#             */
/*   Updated: 2025/10/28 14:23:56 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main(void)
{
	// Guidelines example test
	std::cout << "--- Guidelines example test ---" << std::endl;
	MutantStack<int> mustache;
	mustache.push(5);
	mustache.push(17);
	std::cout << mustache.top() << std::endl;
	mustache.pop();
	std::cout << mustache.size() << std::endl;
	mustache.push(3);
	mustache.push(5);
	mustache.push(737);
	mustache.push(0);
	MutantStack<int>::iterator it = mustache.begin();
	MutantStack<int>::iterator ite = mustache.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	// Comparison with std::list
	std::cout << "--- Comparison with std::list ---" << std::endl;
	std::list<int> lst;
	lst.push_back(5);
	lst.push_back(17);
	std::cout << lst.back() << std::endl;
	lst.pop_back();
	std::cout << lst.size() << std::endl;
	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);
	lst.push_back(0);
	std::list<int>::iterator lst_it = lst.begin();
	std::list<int>::iterator lst_ite = lst.end();
	++lst_it;
	--lst_it;
	while (lst_it != lst_ite)
	{
		std::cout << *lst_it << std::endl;
		++lst_it;
	}
	
	return (0);
}