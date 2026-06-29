#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>
template <typename A, typename F>
void iter(A* array, size_t lenght, F function)
{
    if(!array || !function)
        return;
    for(size_t i = 0; i < lenght; i++)
    {
        function(array[i]);
    }
}
template <typename A, typename F>
void iter(const A *array, size_t lenght,const F function)
{
    if(!array || !function)
        return;
    for (size_t i = 0; i < lenght; i++)
    {
        function(array[i]);
    }
}

#endif