#include "includes/Span.hpp"
#include <iostream>

#include "includes/Span.hpp"

int main() {
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
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
