#include <iostream>
using namespace std;

int main() {

    int choice;

    do {
    cout<<" - - - - - - CALCULATOR - - - - - - "<<endl;
    cout << "1. Addition"<<endl;
    cout << "2. Subtraction"<<endl;
    cout << "3. Multiplication"<<endl;
    cout << "4. Division"<<endl;
    cout << "5. Power"<<endl;
    cout << "6. Factorial"<<endl;
    cout << "7. Multiplication Table"<<endl;
    cout << "8. Even or Odd"<<endl;
    cout << "9. Exit"<<endl;

    cout << "Enter Choice:"<<endl;
    cin >> choice;

    if(choice == 1) {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Result = " << a + b << endl;
    }

    else if(choice == 2) {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Result = " << a - b << endl;
    }

    else if(choice == 3) {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Result = " << a * b << endl;
    }

    else if(choice == 4) {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    if(b == 0) {
    cout << "Cannot divide by zero."<<endl;
    }
    else {
    cout << "Result = " << a / b << endl;
    }
    }

    else if(choice == 5) {
    int base, power;
    int result = 1;
    
    cout << "Enter base: ";
    cin >> base;

    cout << "Enter power: ";
    cin >> power;

   for(int i = 1; i <= power; i++) {
    result = result * base;
    }

    cout << "Result = " << result << endl;
    }

    else if(choice == 6) {
    int num;
    int fact = 1;

    cout << "Enter number: ";
    cin >> num;
    for(int i = 1; i <= num; i++) {
    fact = fact * i;
    }

    cout << "Factorial = " << fact << endl;
    }

    else if(choice == 7) {
    int num;
    
    cout << "Enter number: ";
    cin >> num;

    for(int i = 1; i <= 10; i++) {
    cout << num << " x " << i
    << " = " << num * i << endl;
    }
    }

    else if(choice == 8) {
    int num;

   cout << "Enter number: ";
    cin >> num;

   if(num % 2 == 0) {
    cout << "Even Number"<<endl;
    }
    else {
    cout << "Odd Number"<<endl;
    }
    }

    else if(choice == 9) {
    cout << "Exiting Program..."<<endl;
    }

    else {
    cout << "Invalid Choice."<<endl;
    }

    } while(choice != 9);

    return 0;
}
