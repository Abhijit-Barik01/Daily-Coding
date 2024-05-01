#include<iostream>
#include<memory>

using namespace std;
 
class MemoryPointer{

    public:
    void memoryHnadler();

};
 void MemoryPointer::memoryHnadler()
 {
    shared_ptr<int> p1(new int(20));
    shared_ptr<int> p2;
    p2 =p1 ;

    cout<<"total refefferenc count " << p1.use_count() <<endl;
    cout<<"total refference count " << p2.use_count() <<endl;
    cout<<"Address of p1"<<p1.get()<<endl;
    cout<<"Address of p2 "<<p2.get() <<endl;

    p1.reset();
    cout<<"total refefferenc count " << p1.use_count() <<endl;
    cout<<"total refference count " << p2.use_count() <<endl;

 }
 
 int main()
 {
    MemoryPointer obj ;
    obj.memoryHnadler();
    return 0;
 }