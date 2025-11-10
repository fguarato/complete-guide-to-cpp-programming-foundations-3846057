// Complete Guide to C++ Programming Foundations
// Exercise 04_06
// The Vector Class, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <string>

int main(){
    std::vector<std::string> checkpoint = {"Start", "Forest", "Castle"};

    // Print size of the vector
    std::cout << checkpoint.size() << std::endl;
    std::cout << std::endl;

    checkpoint.push_back("Cave");
    checkpoint.push_back("Finish");

    for(auto x : checkpoint){
        std::cout << x << std::endl;
    }
    // Print out size of vector
    std::cout << "The game has " << checkpoint.size() << " checkpoints." << std::endl;

    // Update elements
    checkpoint[2] = "Dark castle";

    for(auto x : checkpoint){
        std::cout << x << std::endl;
    }
    
    std::cout << std::endl << std::endl;
    return 0;
}
