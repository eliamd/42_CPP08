//
// Created by Eliam on 21/05/2025.
//

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <vector>
#include <algorithm>
#include <stdexcept>


template<typename T>
typename T::iterator easyfind(T &container, int n) {
	typename T::iterator it = std::find(container.begin(), container.end(), n);
	if (it != container.end())
		return it;
	throw std::runtime_error("Valeur non trouvée");
}


#endif //EASYFIND_HPP
