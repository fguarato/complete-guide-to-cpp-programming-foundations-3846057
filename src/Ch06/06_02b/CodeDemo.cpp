// Complete Guide to C++ Programming Foundations
// Exercise 06_02
// Passing Values to a Function, by Eduardo Corpeño 

#include <iostream>

// takes arguments by value
int square(int x){
    return x*x;
}

// Takes argument by address
void swap(int* x, int* y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int a = 9, b;
    b = square(a);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    int* x = &a;
    int* y = &b;
    swap(x, y);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    // TODO: swap
    //std::cout << "a = " << a << ", b = " << b << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
