#include<iostream>
#include<memory>
using namespace std;


int main()
{

    unique_ptr<int> p1(new int(10));
    unique_ptr<int> p2;

    p2 = move(p1);
    if(p1 == nullptr)
    {
        cout<<" p1 is  not a owner" <<endl;
    }
    else{
        cout<<" p1 is owner & value is " << *p1;
    }
     // Attempting to access *p1 here will lead to undefined behavior as p1 is nullptr
    // cout << *p1;

    cout << *p2;

    return 0;
}