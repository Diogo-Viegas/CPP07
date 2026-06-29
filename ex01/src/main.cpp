#include "../inc/iter.hpp"

template <typename T>
void printElement(const T &element) {
    std::cout << element << " " << std::endl;
}

void mult(int &i)
{
    i*=10;
}

int main()
{
    std::cout << "Testing INT array non-const" << std::endl;
    int int_arr[] = {1, 2, 3};
    ::iter(int_arr, 3, mult);
    for(int i = 0; i < 3; i++)
    {
        std::cout << i <<"-> " << i << " -> " << int_arr[i] << std::endl;
    }
    std::cout << "Testing INT array const" << std::endl;
    const int int_const_arr[] = {1, 2, 3};
    ::iter(int_const_arr,3,printElement<int>);
    std::cout << "Testing STRING array const" << std::endl;
    const std::string str_arr[] = {"Hello", "World", "42"};
    ::iter(str_arr,3,printElement<std::string>);
    return (0);
}