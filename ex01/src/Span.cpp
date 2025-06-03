//
// Created by Eliam on 30/05/2025.
//

#include "../includes/Span.hpp"

#include <iostream>
#include <algorithm>
#include <limits>

Span::Span() : max_size(0)
{
}

Span::Span(unsigned int max_size) : max_size(max_size)
{
}

Span::Span(const Span &other) : max_size(other.max_size), span(other.span)
{
}
Span &Span::operator=(const Span &other)
{
	if (this != &other)
	{
		max_size = other.max_size;
		span = other.span;
	}
	return *this;
}
Span::~Span()
{
}

void Span::addNumber(int number)
{
	if (span.size() < max_size)
	{
		if (span.empty())
		{
			span.push_back(number);
			// std::cout << "Number " << number << " added to span" << std::endl;
		}
		else if (!span.empty())
		{
			if (std::find(span.begin(), span.end(), number) != span.end())
			{
				// std::cout << "Number " << number << " not in span" << std::endl;
				throw std::runtime_error("Number already in span");
			}
			span.push_back(number);
			// std::cout << "Number " << number << " added to span" << std::endl;
		}
	}
	else
	{
		throw std::runtime_error("Span is full");
	}
}

int Span::shortestSpan() const
{
	if (span.size() < 2)
	{
		throw std::runtime_error("Span is too small");
	}

	std::vector<int> sortedSpan = span;
	std::sort(sortedSpan.begin(), sortedSpan.end());

	int minSpan = std::numeric_limits<int>::max();
	for (size_t i = 1; i < sortedSpan.size(); ++i)
	{
		int currentSpan = sortedSpan[i] - sortedSpan[i - 1];
		if (currentSpan < minSpan)
		{
			minSpan = currentSpan;
		}
	}

	return minSpan;
}

int Span::longestSpan() const
{
	if (span.size() < 2)
	{
		throw std::runtime_error("Span is too small");
	}

	const int minVal = *std::min_element(span.begin(), span.end());
	const int maxVal = *std::max_element(span.begin(), span.end());

	return maxVal - minVal;
}

template <typename InputIterator>
void Span::addNumber(InputIterator begin, InputIterator end)
{
	size_t rangeSize = std::distance(begin, end);
	if (span.size() + rangeSize > max_size)
	{
		throw std::runtime_error("Adding this range would exceed the Span's capacity.");
	}
	span.insert(span.end(), begin, end);
}
