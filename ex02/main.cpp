/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymsa <ymsa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 19:29:44 by ymsa              #+#    #+#             */
/*   Updated: 2026/05/10 19:29:44 by ymsa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <string>

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

    std::cout << "\n- Test copy" << std::endl;
    MutantStack<int> mstack2(mstack);
    MutantStack<int>::iterator it2 = mstack2.begin();
    while (it2 != mstack2.end())
    {
        std::cout << *it2 << std::endl;
        ++it2;
    }

    std::cout << "\n- Test string" << std::endl;
    MutantStack<std::string> sstack;
    sstack.push("hello");
    sstack.push("world");
    sstack.push("42");
    MutantStack<std::string>::iterator sit = sstack.begin();
    while (sit != sstack.end())
    {
        std::cout << *sit << std::endl;
        ++sit;
    }

    std::cout << "\n- Test empty" << std::endl;
    MutantStack<int> empty;
    std::cout << "Size : " << empty.size() << std::endl;
    std::cout << "Begin == End : " << (empty.begin() == empty.end()) << std::endl;

    return 0;
}
// #include <list>

// int main()
// {
//     std::list<int> mstack;
//     mstack.push_back(5);
//     mstack.push_back(17);
//     std::cout << mstack.back() << std::endl;
//     mstack.pop_back();
//     std::cout << mstack.size() << std::endl;
//     mstack.push_back(3);
//     mstack.push_back(5);
//     mstack.push_back(737);
//     mstack.push_back(0);

//     std::list<int>::iterator it = mstack.begin();
//     std::list<int>::iterator ite = mstack.end();
//     ++it;
//     --it;
//     while (it != ite)
//     {
//         std::cout << *it << std::endl;
//         ++it;
//     }
//     return 0;
// }
