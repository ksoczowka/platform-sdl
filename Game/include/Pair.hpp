#pragma once

#include <concepts>

template<typename T>
struct Pair {
    Pair() {}
    Pair(const Pair& other);
    Pair(const T& X, const T& Y);

    Pair<T> operator=(Pair& other);

    T x;
    T y;
};