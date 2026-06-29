#include "../inc/iter.hpp"
#include <iostream>
#include <string>


template <typename T>
void printElement(const T &element) {
    std::cout << element << " ";
}


void multPorDez(int &i) {
    i *= 10;
}


void incrementaFloat(float &f) {
    f += 1.5f;
}

int main()
{
    std::cout << "=== Teste 1: Array de INT (Nao-Const) - Modificacao ===" << std::endl;
    int int_arr[] = {1, 2, 3, 4, 5};
    size_t int_len = sizeof(int_arr) / sizeof(int_arr[0]);

    std::cout << "Original: ";
    ::iter(int_arr, int_len, printElement<int>);
    std::cout << std::endl;

    ::iter(int_arr, int_len, multPorDez);

    std::cout << "Apos multPorDez: ";
    ::iter(int_arr, int_len, printElement<int>);
    std::cout << "\n" << std::endl;

    
    std::cout << "=== Teste 2: Array de INT (Const) - Apenas Leitura ===" << std::endl;
    const int int_const_arr[] = {10, 20, 30};
    size_t const_len = sizeof(int_const_arr) / sizeof(int_const_arr[0]);

    std::cout << "Array Constante: ";

    ::iter(int_const_arr, const_len, printElement<int>);
    std::cout << "\n" << std::endl;

   
    std::cout << "=== Teste 3: Array de FLOAT (Nao-Const) ===" << std::endl;
    float float_arr[] = {1.0f, 2.0f, 3.0f};
    size_t float_len = sizeof(float_arr) / sizeof(float_arr[0]);

    std::cout << "Original: ";
    ::iter(float_arr, float_len, printElement<float>);
    std::cout << std::endl;

    ::iter(float_arr, float_len, incrementaFloat);

    std::cout << "Apos incremento: ";
    ::iter(float_arr, float_len, printElement<float>);
    std::cout << "\n" << std::endl;

  
    std::cout << "=== Teste 4: Array de STRINGS (Const) ===" << std::endl;
    const std::string str_arr[] = {"Ola", "Mundo", "42", "Lisboa"};
    size_t str_len = sizeof(str_arr) / sizeof(str_arr[0]);

    std::cout << "Strings: ";
    ::iter(str_arr, str_len, printElement<std::string>);
    std::cout << "\n" << std::endl;

    return 0;
}