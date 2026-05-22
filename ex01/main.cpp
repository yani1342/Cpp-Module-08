/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymsa <ymsa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 19:05:37 by ymsa              #+#    #+#             */
/*   Updated: 2026/05/10 19:05:37 by ymsa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    // Test exception : span plein
    try {
        sp.addNumber(99);
    } catch (std::exception &e) {
        std::cout << "Error : " << e.what() << std::endl;
    }

    // Test exception : pas assez de nombres
    Span sp2(5);
    sp2.addNumber(3);
    try {
        sp2.shortestSpan();
    } catch (std::exception &e) {
        std::cout << "Error : " << e.what() << std::endl;
    }

    // Test avec beaucoup de nombres (sujet demande 10 000 minimum)
    Span big(10000);
    for (int i = 0; i < 10000; i++)
        big.addNumber(i);
    std::cout << big.shortestSpan() << std::endl; // doit afficher 1
    std::cout << big.longestSpan() << std::endl;  // doit afficher 9999

    std::vector<int> v;
    for (int i = 0; i < 5000; i++)
        v.push_back(i);
    Span sp4(5000);
    sp4.addRange(v.begin(), v.end());
    std::cout << sp4.longestSpan() << std::endl; // 4999

    return 0;
}
