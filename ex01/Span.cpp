/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymsa <ymsa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 16:29:41 by ymsa              #+#    #+#             */
/*   Updated: 2026/05/10 16:29:41 by ymsa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : _n(n) {}

Span::Span(const Span& other) : _n(other._n), _numbers(other._numbers) {}

Span& Span::operator=(const Span& other){
    if (this != &other){
        _n = other._n;
        _numbers = other._numbers;
    }
    return *this;
}

Span:: ~Span() {}

void Span::addNumber(int n){
    if (_numbers.size() == _n) //verifie si il est plein
        throw std::runtime_error("is full");
    _numbers.push_back(n); //ajouter un element au vecteur A LA FIN
}

long long Span::shortestSpan(){
    if (_numbers.size() < 2)
        throw std::runtime_error("not enough number");

    std::sort(_numbers.begin(), _numbers.end());

    long long shortest = _numbers[1] - _numbers[0];
    for (size_t i = 1; i < _numbers.size(); i++)
    {
        if (_numbers[i] - _numbers[i - 1] < shortest)
            shortest = _numbers[i] - _numbers[i - 1];
    }
    return shortest;
}

long long Span::longestSpan(){
    if (_numbers.size() < 2)
        throw std::runtime_error("not enough number");

    long long max = *std::max_element(_numbers.begin(), _numbers.end());
    long long min = *std::min_element(_numbers.begin(), _numbers.end());
    
    return(max - min);
}