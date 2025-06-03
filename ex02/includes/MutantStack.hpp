//
// Created by Eliam on 30/05/2025.
//

#ifndef SPAN_HPP
#define SPAN_HPP

#include <stack>

template<typename T>
class	MutantStack : public std::stack<T>
{
public:
	MutantStack<T>();
	MutantStack<T>(const MutantStack<T> &src);
	MutantStack<T>& operator=(const MutantStack<T> &src);
	~MutantStack<T>();

	typedef typename std::stack<T>::container_type::iterator 		iterator;
	typedef typename std::stack<T>::container_type::const_iterator	const_iterator;

	iterator	begin();
	iterator	end();

	const_iterator	cbegin();
	const_iterator	cend();
};

template<typename T>
MutantStack<T>::MutantStack() {}

template<typename T>
MutantStack<T>::~MutantStack() {}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &src)
{
	*this = src;
}

template<typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T> &src)
{
	if (this != &src)
		this->c = src.c;
	return (*this);
}

template<typename T>
typename std::stack<T>::container_type::iterator	MutantStack<T>::begin()
{
	return (this->c.begin());
}

template<typename T>
typename std::stack<T>::container_type::iterator	MutantStack<T>::end()
{
	return (this->c.end());
}

template<typename T>
typename std::stack<T>::container_type::const_iterator	MutantStack<T>::cbegin()
{
	return (this->c.cbegin());
}

template<typename T>
typename std::stack<T>::container_type::const_iterator	MutantStack<T>::cend()
{
	return (this->c.cend());
}

#endif //SPAN_HPP
