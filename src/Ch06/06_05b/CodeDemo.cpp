// Complete Guide to C++ Programming Foundations
// Exercise 06_05
// Overloading Functions, by Eduardo Corpeño 

#include <iostream>
#include <string>

// Function to get the speed of a player
int getSpeed(int distance, int time){
    return distance / time;
}

int getSpeed(const double& time){
    return static_cast<int>(200.0 / time);
}

int main(){
    int speedInt;

    speedInt = getSpeed(200, 4);
    std::cout << "Speed (int): " << speedInt << std::endl;

    double speedOverload;

    speedOverload = getSpeed(2.0);
    std::cout << "Speed (overload): " << speedOverload << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
