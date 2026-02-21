#include <iostream> 
using namespace std; 
class Base { 
public: 
 virtual void display() { 
 cout << "Display functon of Base class" << endl;
 } 
}; 
class Derived : public Base { 
public: 
 void display() { 
 cout << "Display functon of Derived class" << endl;
 } 
};
int main() { 
 Base* b; 
 Derived d; 
 b = &d; 
 b->display(); // Calls Derived class funcƟon
 return 0; 
}