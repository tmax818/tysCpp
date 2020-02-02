#include <iostream>
using namespace std;

int main()
{
    cout << "This program will help you multiply two numbers" << endl;

    cout << "Enter the first number: ";
    int firstNumber = 0;
    cin >> firstNumber;

    cout << "Enter the second number: ";
    int secondNumber = 0;
    cin >> secondNumber;

    // Multiply the two numbers and store the product in  a variable
    int answer = firstNumber * secondNumber;

    // Display the result
    cout << firstNumber << "x" << secondNumber;
    cout << " = " << answer << endl;

    return 0;
}