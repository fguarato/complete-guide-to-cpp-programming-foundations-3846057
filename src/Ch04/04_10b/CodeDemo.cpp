// Complete Guide to C++ Programming Foundations
// Exercise 04_10
// The String Class, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <vector>

int main(){
    std::string racer1 = "Speedy";
    std::string racer2 = "Lightning";
    std::string raceResult;

    std::cout << "Racer 1: " << racer1 << std::endl;
    std::cout << "Racer 2: " << racer2 << std::endl;

    raceResult = "The winner is: " + racer1;

    std::cout << raceResult << std::endl;

    std::vector<int>* v1 = new std::vector<int> ({1, 2, 3});
    std::vector<int>* v2;
    v2=v1;
    v1->push_back(4);
    v2->push_back(5);

    // for(size_t x = 0; x<v1->size(); x++){
    //     // std::cout << v1->at(x) << std::endl;
    //     std::cout << (*v1).at(x) << std::endl;
    // }
    // std::cout << std::endl;

    for(auto y : *v2){
        std::cout << y << std::endl;
    }
    std::cout << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
