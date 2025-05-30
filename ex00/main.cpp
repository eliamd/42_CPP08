#include <vector>
#include <iostream>
#include <iterator>

#include "includes/Easyfind.hpp"

int main() {
	std::vector<int> v;
	v.push_back(1);
	v.push_back(42);
	v.push_back(3);

	try {
        std::vector<int>::iterator it = easyfind(v, 42);
        std::cout << "Trouvé à l'index : " << std::distance(v.begin(), it) << std::endl;
	} catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
