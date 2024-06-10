For better memory management, to avoid memory leak C++11 introduced smart pointer. when multiple pointer pointing one resource then it is shared resource , in this case there  will be chance of memory leak and dangling pointer.
There are 3 types of unique pointer----------
1)unique_ptr 2) weak_ptr 3) shared_ptr

* unique_ptr is a template. why it is called unique ptr becasue at onec 1 unique_ptr object can hold raw pointer . Mutiple unique_ptr can not  point same resource  thats the rule here. But we can move ownership of unique_ptr.

![image](https://github.com/Abhijit-Barik01/Daily-Coding/assets/71961635/af7871c4-c6bd-447c-81c9-ad5cadd05218)
![image](https://github.com/Abhijit-Barik01/Daily-Coding/assets/71961635/f5fe06c7-31c0-4739-a16a-5c1ad9deac20)
![image](https://github.com/Abhijit-Barik01/Daily-Coding/assets/71961635/2d13b2c1-8176-4235-a71c-9a8a4c121eb0)
![image](https://github.com/Abhijit-Barik01/Daily-Coding/assets/71961635/fb337beb-2573-46e0-b8f6-1d390ab4ff34)
![image](https://github.com/Abhijit-Barik01/Daily-Coding/assets/71961635/18bbc655-8a53-4a95-b3e0-8d47335f3108)
![image](https://github.com/Abhijit-Barik01/Daily-Coding/assets/71961635/0e76e9d6-45a5-4402-a401-90eb775d87e4)
![image](https://github.com/Abhijit-Barik01/Daily-Coding/assets/71961635/f753875d-955e-414d-9133-ae1403628613)


** shared_ptr   
![image](https://github.com/Abhijit-Barik01/Daily-Coding/assets/71961635/e293d4c7-2dd4-4f38-a911-a0e6b8ed8095)
```
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

```

```
#include<iostream>
#include<memory>
using namespace std;

class Tyre
{
    public:
     void dorepair() {};
};

class Car
{
    private:
    shared_ptr<Tyre>wheel1;

    public:
      Car()
        {
          wheel1 = make_shared(new Tyre());
        cout<<"adress of wheel1 " << wheel1.get() <<endl;
      };

      shared_ptr<Tyre>Getwheel(){
        return wheel1;
      }

    
};
int main()
{
    Car car;
    shared_ptr<Tyre>wheel(car.Getwheel());
   cout<< "Adress of  wheel" << wheel.get();

    return 0;
}

```
