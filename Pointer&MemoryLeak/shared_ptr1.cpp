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
      Car() : wheel1(make_shared<Tyre>()) {
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