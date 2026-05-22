/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymsa <ymsa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 19:17:26 by ymsa              #+#    #+#             */
/*   Updated: 2026/05/09 19:17:26 by ymsa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int main()
{
    std::vector<int> vec;
    vec.push_back(3);
    vec.push_back(9);
    vec.push_back(17);

    // Cas 1 : valeur présente
    try {
        std::vector<int>::iterator it = easyfind(vec, 9);
        std::cout << "Found : " << *it << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "Error : " << e.what() << std::endl;
    }

   
    // Cas 2 : valeur absente
    try {
        easyfind(vec, 99);
    } catch (std::exception &e) {
        std::cout << "Error : " << e.what() << std::endl;
    }

    // Cas : conteneur vide
    std::vector<int> empty;

    try {
        easyfind(empty, 9);
    }
    catch (std::exception &e) {
    std::cout << "Error : " << e.what() << std::endl;
    }

    std::list<int> lst;
    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(30);

    try {
        std::list<int>::iterator it = easyfind(lst, 20);
        std::cout << "Found : " << *it << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "Error : " << e.what() << std::endl;
    }
    return 0;
}