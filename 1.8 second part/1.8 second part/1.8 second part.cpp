// 1.8 second part.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

int remainderFunction(double number1, double number2) //Gets the remainder
{
    return remainder(number1, number2);
}

int main()
{
    double firstnumber; double secondnumber; //Initialize variables

    cout << "Enter number 1:\n"; //Get numbers
    cin >> firstnumber;

    cout << "Enter number 2:\n";
    cin >> secondnumber;

    firstnumber = remainderFunction(firstnumber, secondnumber); //Call function

    cout << firstnumber << endl; //Prints result
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
