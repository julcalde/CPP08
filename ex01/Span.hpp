/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:08:06 by julcalde          #+#    #+#             */
/*   Updated: 2025/10/27 15:12:49 by julcalde         ###   ########.fr       */
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
		~Span();
		Span(const Span &other);
		Span& operator=(const Span &other);

		void addNumber(int num);
		template <typename Iter>
		void addNumber(Iter begin, Iter end);
		int shortestSpan() const;
		int longestSpan() const;
};

#endif