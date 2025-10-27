/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:08:06 by julcalde          #+#    #+#             */
/*   Updated: 2025/10/27 21:26:50 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <stdexcept>
#include <algorithm>
#include <iterator>

class Span
{
	private:
		unsigned int		_maxSize;
		std::vector<int>	_numbers;

	public:
		Span(unsigned int N);
		Span(const Span &other);
		Span& operator=(const Span &other);
		~Span();

		void addNumber(int num);
		/* addNumber (template): Adds a range of numbers to the Span.*/
		template <typename Iterator>
		void addNumber(Iterator begin, Iterator end)
		{
			size_t count = std::distance(begin, end);
			if (_numbers.size() + count > _maxSize)
				throw std::runtime_error("Max capacity exceeded");
			_numbers.insert(_numbers.end(), begin, end);
		}
		int shortestSpan() const;
		int longestSpan() const;
};

#endif