/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:34:45 by julcalde          #+#    #+#             */
/*   Updated: 2025/10/27 14:53:55 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <stdexcept>

/*
	easyfind: A template function that searches for a given integer value
	in a container (like std::vector, std::list, etc.) and returns an iterator
	to the first occurrence of that value. If the value is not found, it throws a
	std::runtime_error exception.
*/
template <typename T>
typename T::iterator easyfind(T& container, int value)
{
	typename T::iterator iter = std::find(container.begin(), container.end(), value);
	if (iter == container.end())
		throw std::runtime_error("Value not present in container");
	return (iter);
}

#endif