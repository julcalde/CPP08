/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 21:37:04 by julcalde          #+#    #+#             */
/*   Updated: 2025/10/28 14:19:36 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <deque>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	// OCF
	public:
		MutantStack() : std::stack<T>() {}
		MutantStack(const MutantStack& other) : std::stack<T>(other) {}
		MutantStack& operator=(const MutantStack& other)
		{
			if (this != &other)
				std::stack<T>::operator=(other);
			return (*this);
		}
		~MutantStack() {}

	// Types of iterators
	typedef typename std::deque<T>::iterator iterator;
	typedef typename std::deque<T>::const_iterator const_iterator;

	//Iterator functions
	iterator begin(){
		return (this->c.begin());
	}
	
	iterator end(){
		return (this->c.end());
	}
	
	const_iterator begin() const{
		return (this->c.begin());
	}
	
	const_iterator end() const{
		return (this->c.end());
	}
};

#endif