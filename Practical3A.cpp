#include <iostream> 
using namespace std; 
class Student { 
public: 
 string name; // public data members 
 int roll_no; 
 // funcƟon to read student details
 void readData() { 
 cout << "Enter Name: "; 
 cin >> name; 
 cout << "Enter Roll Number: "; 
 cin >> roll_no; 
 } 
 void displayData() { 
 cout << "\n--- Student Details ---" << endl; 
 cout << "Name: " << name << endl; 
 cout << "Roll Number: " << roll_no << endl; 
 } 
}; 
int main() { 
 Student s; // object created 
 s.readData(); // calling member funcƟon
 s.displayData(); 
 return 0; 
} 
