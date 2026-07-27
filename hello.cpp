/*#include<iostream>
using namespace std;
int main(){
    cout<<"Hello World";
    return 0;
} */

#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "\nResults\n";
    cout << "Addition = " << a + b << endl;
    cout << "Subtraction = " << a - b << endl;
    cout << "Multiplication = " << a * b << endl;

    if (b != 0)
    {
        cout << "Division = " << a / b << endl;
        cout << "Remainder = " << a % b << endl;
    }
    else
    {
        cout << "Division by zero is not possible." << endl;
    }

    return 0;
}