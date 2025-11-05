// Complete Guide to C++ Programming Foundations
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    int farenheit = 100;
    int celsius;

    celsius = (static_cast<float>(5)/9.0) * (farenheit - 32);

    std::cout << std::endl;
    std::cout << "Farenheit: " << farenheit << std::endl;
    std::cout << "Celsius: " << celsius << std::endl;

    float weight = 10.99;

    std::cout << std::endl;
    std::cout << "Float           : " << weight << std::endl;
    std::cout << "Integer part    : " << weight - (weight - static_cast<int>(weight)) << std::endl;
    std::cout << "Fractional part : " << weight - static_cast<int>(weight) << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
