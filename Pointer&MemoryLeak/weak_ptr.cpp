#include<bits/stdc++.h>
using namespace std;
int main()
{
    shared_ptr<int>p1(new int(10));
    weak_ptr<int>p2 = p1;


    cout<<"refference count  "<< p1.use_count() <<endl;
    cout <<"refference count "<< p2.use_count() <<endl;

    cout<<"value of p1 " <<*p1 << " value of p2 " << *(p2.lock()) <<endl;

    p2.reset();

    cout<<"refference count  "<< p1.use_count() <<endl;
    cout <<"refference count "<< p2.use_count() <<endl;

    
}