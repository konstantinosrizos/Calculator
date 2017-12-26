#include <iostream>
#include <string>
#include <cmath>

using namespace std;


int main()
{
     int End = 5;
     int Subtraction = 4;
     int Addition = 3;
     int Multiplication = 2;
     int Division = 1;
     int answer;

     cout << "What basic mathematical operator shall I perform ?" << endl;
     cout << "Please answer with:\n Division(1)\n Multiplication(2)\n Addition(3)\n Subtraction(4)\n End(5)." << endl;
     cin >> answer;

while (answer != 5) {

     if (answer == 1) //Division section of the calculator
     {
            long double value1;
            long double value2;

            cout << "Input value to be divided: " << endl;
            cin >> value1;
            cout << "Input the dividend: " << endl;
            cin >> value2;

            value1 /= value2;
            cout << "Total: " << value1 << endl;
            cout << "Please input the next operation number you would like to preform." << endl;
            cin >> answer;

     }

     if (answer == 2) //Multiplication section of the calculator
     {
            long double value1;
            long double value2;

            cout << "Input value to be first number: " << endl;
            cin >> value1;
            cout << "Input the second number: " << endl;
            cin >> value2;

            value1 *= value2;
            cout << "Total: " << value1 << endl;
            cout << "Please input the next operation number you would like to preform." << endl;
            cin >> answer;
        }

     if (answer == 3) //Addition section of the calculator
     {
            long double value1;
            long double value2;

            cout << "Input the first value : " << endl;
            cin >> value1;
            cout << "Input the second value: " << endl;
            cin >> value2;

            value1 += value2;
            cout << "Total: " << value1 << endl;
            cout << "Please input the next operation number you would like to preform." << endl;
            cin >> answer;
     }

     if (answer == 4) //Subtraction section of the calculator
     {
            long double value1;
            long double value2;

            cout << "Input value to be subtracted from: " << endl;
            cin >> value1;
            cout << "Input the number to subtract from the first: " << endl;
            cin >> value2;

            value1 -= value2;
            cout << "Total: " << value1 << endl;
            cout << "Please input the next operation number you would like to preform." << endl;
            cin >> answer;
     }
}

    cout << "Good bye";
    return 0;
}

