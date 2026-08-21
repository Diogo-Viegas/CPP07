#include "../inc/iter.hpp"
#include <iostream>
#include <string>


template <typename T>
void printElement(const T &element) {
    std::cout << element << " ";
}


void timesTen(int &i) {
    i *= 10;
}


void incrementFloat(float &f) {
    f += 1.5f;
}

int main()
{
    std::cout << "=== Test 1: INT ARRAY (Non-Const) - Modify ===" << std::endl;
    int int_arr[] = {1, 2, 3, 4, 5};
    size_t int_len = sizeof(int_arr) / sizeof(int_arr[0]);
    std::cout << "Original: ";
    ::iter(int_arr, int_len, printElement<int>);
    std::cout << std::endl;

    std::cout << "After * 10: ";
    ::iter(int_arr, int_len, timesTen);
    ::iter(int_arr, int_len, printElement<int>);
    std::cout << "\n" << std::endl;

    
    std::cout << "=== Test 2: INT ARRAY  (Const) - Read Only ===" << std::endl;
    const int int_const_arr[] = {10, 20, 30};
    size_t const_len = sizeof(int_const_arr) / sizeof(int_const_arr[0]);
    std::cout << "Const Array: ";

    ::iter(int_const_arr, const_len, printElement<int>);
    std::cout << "\n" << std::endl;

   
    std::cout << "=== Test 3: FLOAT ARRAY (Non-Const) ===" << std::endl;
    float float_arr[] = {1.0f, 2.0f, 3.0f};
    size_t float_len = sizeof(float_arr) / sizeof(float_arr[0]);

    std::cout << "Original: ";
    ::iter(float_arr, float_len, printElement<float>);
    std::cout << std::endl;

    ::iter(float_arr, float_len, incrementFloat);

    std::cout << "After Increment: ";
    ::iter(float_arr, float_len, printElement<float>);
    std::cout << "\n" << std::endl;

  
    std::cout << "=== Test 4: STRING ARRAY (Const) ===" << std::endl;
    const std::string str_arr[] = {"Ola", "Mundo", "42", "Lisboa"};
    size_t str_len = sizeof(str_arr) / sizeof(str_arr[0]);

    std::cout << "Strings: ";
    ::iter(str_arr, str_len, printElement<std::string>);
    std::cout << "\n" << std::endl;

    return 0;
}