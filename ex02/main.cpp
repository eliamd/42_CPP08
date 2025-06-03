#include "includes/MutantStack.hpp"
#include <iostream>

#include "includes/MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}


// int main() {
// 	Span span(1);
// 	for (int i = 0; i < 1; i++) {
// 		span.addNumber(i);
// 	}
// 	try {
// 		std::cout << "shortestSpan : " << span.shortestSpan() << std::endl;
// 	} catch (std::runtime_error e) {
// 		std::cout << e.what() << std::endl;
// 	}
// 	try {
// 		std::cout << "longestSpan  : " << span.longestSpan() << std::endl;
// 	} catch (std::runtime_error e) {
// 		std::cout << e.what() << std::endl;
// 	}
// 	return 0;
// }
