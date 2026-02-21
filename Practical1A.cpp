#include <iostream> 
using namespace std; 
int main() { 
 char operaƟon;
 float num1, num2, result; 
 cout << "Enter first number: "; 
 cin >> num1; 
 cout << "Enter second number: "; 
 cin >> num2; 
 cout << "Enter operaƟon (+, -, *, /): "; 
 cin >> operaƟon;
 switch (operaƟon) {
 case '+': 
 result = num1 + num2; 
 break; 
 case '-': 
 result = num1 - num2; 
 break;
case '*': 
 result = num1 * num2; 
 break; 
 case '/': 
 if (num2 != 0) { 
 result = num1 / num2; 
 } else { 
 cout << "Error! Division by zero." << endl; 
 return 1; 
 } 
 break; 
 default: 
 cout << "Invalid operaƟon!" << endl;
 return 1; 
 } 
 cout << "Result: " << result << endl; 
 return 0; 
} 
 