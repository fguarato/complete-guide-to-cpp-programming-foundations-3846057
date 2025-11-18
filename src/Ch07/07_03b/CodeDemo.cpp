// Complete Guide to C++ Programming Foundations
// Exercise 07_03
// Function Members, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class Inventory{
public:
    // Add item to inventory
    void addItem(const std::string& item){
        if(items->size() < capacity)
            items->push_back(item);
        else
            std::cout << "No space for item " << item << std::endl;
    }

    // Remove item from inventory
    void removeItem(const std::string& item){
        auto it = find(items->begin(), items->end(), item);
        if(it != items->end())
            items->erase(it);
        else
            std::cout << "Item " << item << " is not in inventory" << std::endl;
    }

    // Access item by index: allows us to print/read an item by index
    std::string getItem(int index) const{
        if(index >= 0 && index < items->size())
            return items->at(index);
            // return (*items)[index];
        else
            std::cout << "Index " << index << " is out of bounds" << std::endl;
    }

    // Get number of items in the inventory
    int getCount() const{
        return items->size();
    }

    // Display inventory contents
    void displayInventory() const{
        std::cout << "Inventory: [ ";
        for(size_t k = 0; k<items->size(); k++){
            items->at(k);
        }
        std::cout << " ]" << std::endl;
    }

private:
    std::vector<std::string> *items; // Pointer to a vector of items
    int capacity; // Maximum number of items allowed
};

int main(){
    Inventory inv;
    std::string str1 = "Ciao";
    std::string str2 = "Hello";
    std::string str3 = "Hola";
    inv.addItem(str1);
    inv.addItem(str2);
    inv.addItem(str3);

    // int invSize = inv.items->size();

    std::cout << std::endl << std::endl;
    return 0;
}
