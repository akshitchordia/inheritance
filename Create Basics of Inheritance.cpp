//akshit chordia
//24070123008
//entc A1

//Code:
#include <iostream>
using namespace std;

// Base class
class Vehicle {
  public: 
    string brand = "Ford";
    void color() {
      cout << “Red! \n" ;
    }
};

// Derived class
class Car: public Vehicle {
  public: 
    string model = "Mustang";
};
int main() {
  Car myCar;
  myCar.color();
  cout << myCar.brand + " " + myCar.model;
  return 0;
}

//OUTPUT:
//Red! 
//Ford Mustang
