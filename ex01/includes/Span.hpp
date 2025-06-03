//
// Created by Eliam on 30/05/2025.
//

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>



class Span {

	private:
	unsigned int max_size;
	std::vector<int> span;

	public:
	Span();
	Span(unsigned int max_size);
	Span(const Span &other);
	Span &operator=(const Span &other);
	~Span();
	void addNumber(int number);
	int shortestSpan() const;
	int longestSpan() const;

	template<class InputIterator>
	void addNumber(InputIterator begin, InputIterator end);
};



#endif //SPAN_HPP
