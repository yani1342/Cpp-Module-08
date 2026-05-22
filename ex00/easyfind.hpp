/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymsa <ymsa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 19:17:23 by ymsa              #+#    #+#             */
/*   Updated: 2026/05/09 19:17:23 by ymsa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <stdexcept>

template <typename T>
typename T::iterator easyfind(T& container, int value){
    typename T::iterator it = std::find(container.begin(), container.end(), value);

    if (it == container.end())//la valeur n'est pas trouver
        throw std::runtime_error("couldn't find");
    return(it);
}

// Pourquoi & sur T ?
// Sans & → C++ copie tout le conteneur en mémoire pour l'utiliser dans la fonction. Si tu as 10 000 éléments, c'est 10 000 copies inutiles.


#endif