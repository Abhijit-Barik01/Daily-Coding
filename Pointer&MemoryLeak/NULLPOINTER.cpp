#include<iostream>
using namespace std;

int main()
{
        int *ptr = nullptr; //Initializing a pointer to nullptr
        //nullptr  is keyword
        if (ptr == nullptr) {
            std::cout << "Pointer is nullptr." << std::endl;
        } 
        else 
        {
          std::cout << "Pointer is not nullptr." << std::endl;
            
        }

    // Dereferencing a null pointer
    // int x = *ptr; // This will lead to undefined behavior (crash)

    return 0;
}