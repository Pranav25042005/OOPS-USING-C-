#include <iostream> 
using namespace std; 
class Number { 
 int x; 
public: 
 Number(int a) { 
 x = a; 
 } 
 void operator -() { 
 x = -x; 
 } 
 void display() { 
 cout << "Value: " << x << endl; 
 } 
};
int main() { 
 Number n(10); 
 -n; // calls operator-() 
 n.display(); 
 return 0; 
}