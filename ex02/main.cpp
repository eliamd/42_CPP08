#include "includes/MutantStack.hpp"
#include <iostream>

int main()
{
    std::cout << "===== Création et push de 5 et 17 =====" << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "Top (devrait être 17): " << mstack.top() << std::endl;

    std::cout << "\n===== Pop du dernier élément =====" << std::endl;
    mstack.pop();
    std::cout << "Taille après pop (devrait être 1): " << mstack.size() << std::endl;

    std::cout << "\n===== Push de 3, 5 et 737 =====" << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);

    std::cout << "\n===== Push de 0 =====" << std::endl;
    mstack.push(0);

    std::cout << "\n===== Itération à travers la MutantStack =====" << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }

    std::cout << "\n===== Test de copie dans un std::stack =====" << std::endl;
    std::stack<int> s(mstack);
    std::cout << "Top de la stack copiée (devrait être 0): " << s.top() << std::endl;

    std::cout << "\n===== Test avec une stack vide =====" << std::endl;
    MutantStack<int> emptyStack;
    std::cout << "Taille de la stack vide: " << emptyStack.size() << std::endl;

    std::cout << "\n===== Test sur une stack vide =====" << std::endl;
    for (MutantStack<int>::iterator eit = emptyStack.begin(); eit != emptyStack.end(); ++eit)
    {
        std::cout << *eit << std::endl; //rien ici
    }

    return 0;
}
