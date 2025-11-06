// Complete Guide to C++ Programming Foundations
// Exercise 03_06
// Preprocessor Directives, by Eduardo Corpeño 

#include <iostream> // preprocessor directive
#include <cstdint> // preprocessor directive

#define MAX_AMMO 500
#define DEBUG

int main(){
    int32_t ammo = 100;
    uint8_t health_items = 5;

#ifdef DEBUG // MACRO
    std::cout << "[DEBUG] Starting game" << std::endl;
#endif

    ammo += 200; // Player finds extra ammo
    health_items -= 2; // Player uses some health items

    std::cout << "Final Ammo: " << ammo << std::endl;
    std::cout << "Remaining Health Items: " << (int) health_items << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
