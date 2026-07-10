#include "Array.hpp"
#include <iostream>
#include <string>

int main() {
    std::cout << "=== 1. Testing Empty Array ===" << std::endl;
    Array<int> emptyArr;
    std::cout << "Empty array size: " << emptyArr.size() << std::endl;

    std::cout << "\n=== 2. Testing Array of Size 5 (Default Initialization) ===" << std::endl;
    Array<int> intArr(5);
    std::cout << "Int array size: " << intArr.size() << std::endl;
    for (unsigned int i = 0; i < intArr.size(); i++) {
        std::cout << "intArr[" << i << "] = " << intArr[i] << " (Should be 0)" << std::endl;
    }

    // Modify elements
    for (unsigned int i = 0; i < intArr.size(); i++) {
        intArr[i] = (i + 1) * 10;
    }

    std::cout << "\n=== 3. Testing Copy Construction (Deep Copy Verification) ===" << std::endl;
    Array<int> copyArr(intArr);
    std::cout << "Original intArr[0]: " << intArr[0] << std::endl;
    std::cout << "Copied copyArr[0]:   " << copyArr[0] << std::endl;
    
    std::cout << "--- Modifying copyArr[0] to 999 ---" << std::endl;
    copyArr[0] = 999;
    std::cout << "Original intArr[0]: " << intArr[0] << " (Should remain unchanged!)" << std::endl;
    std::cout << "Copied copyArr[0]:   " << copyArr[0] << std::endl;

    std::cout << "\n=== 4. Testing Assignment Operator ===" << std::endl;
    Array<int> assignArr;
    assignArr = intArr;
    std::cout << "Assigned assignArr[1]: " << assignArr[1] << std::endl;
    
    std::cout << "--- Modifying assignArr[1] to 888 ---" << std::endl;
    assignArr[1] = 888;
    std::cout << "Original intArr[1]: " << intArr[1] << " (Should remain unchanged!)" << std::endl;
    std::cout << "Assigned assignArr[1]: " << assignArr[1] << std::endl;

    std::cout << "\n=== 5. Testing Out of Bounds Exception ===" << std::endl;
    try {
        std::cout << "Attempting to access index 5 on an array of size 5..." << std::endl;
        std::cout << intArr[5] << std::endl; 
    } catch (const std::exception& e) {
        std::cerr << "Caught exception successfully: " << e.what() << std::endl;
    }

    try {
        std::cout << "Attempting to access index 0 on an empty array..." << std::endl;
        std::cout << emptyArr[0] << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Caught exception successfully: " << e.what() << std::endl;
    }

    std::cout << "\n=== 6. Testing with another Type (std::string) ===" << std::endl;
    Array<std::string> stringArr(3);
    stringArr[0] = "Hello";
    stringArr[1] = "World";
    stringArr[2] = "!";
    for (unsigned int i = 0; i < stringArr.size(); i++) {
        std::cout << stringArr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}