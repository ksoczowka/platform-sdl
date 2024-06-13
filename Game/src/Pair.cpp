#include "../include/Pair.hpp"

template<typename T>
Pair<T>::Pair(const Pair& other) {
    x = other.x;
    y = other.y;
}

template<typename T>
Pair<T>::Pair(const T& X, const T& Y) {
    x = X
    y = Y;
}

template<typename T>
Pair<T> Pair<T>::operator=(Pair& other) {
    x = other.x;
    y = other.y;
    return &this;
}
