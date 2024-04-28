#include<iostream>
using namespace std;

class MyPointer
{
    public:
    int* fun()
    {
        int *p;
        {
            int x =5;
            p = &x;
            //p = nullptr;
        }
        
    return p; // returning memory of  deallocated adress
        
    }

};

int main()
{   
    MyPointer mp;
   std::cout << mp.fun();
    return  0; 
}