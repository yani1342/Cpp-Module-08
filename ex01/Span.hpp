/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymsa <ymsa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 16:29:35 by ymsa              #+#    #+#             */
/*   Updated: 2026/05/10 16:29:35 by ymsa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <stdexcept>

class Span{
    private:
        unsigned int _n;
        std::vector<int> _numbers;
    
    public:
        Span(unsigned int);
        Span(const Span&);
        Span& operator=(const Span&);
        ~Span();

        void addNumber(int);
        long long shortestSpan();
        long long longestSpan();

        template <typename Iterator>
        void addRange(Iterator begin, Iterator end);
};

template <typename Iterator>
void Span::addRange(Iterator begin, Iterator end)
{
    while (begin != end)
    {
        addNumber(*begin);
        begin++;
    }
}

#endif