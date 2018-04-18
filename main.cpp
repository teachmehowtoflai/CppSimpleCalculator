/*

Name: CppSimpleCalculator
Version: 1.0
Description: Testing github, but code is still on GNU GPL v3.0 License, remember to do not remove.
Coded by: teachmehowtoflai
Date: 18-04-2018
Github: https://github.com/teachmehowtoflai/

Do not remove -!

*/

#include <iostream>
#include <windows.h>

using namespace std;

//numbers variables
float first;
float second;

//calculations variables
float addition;
float subtraction;
float multiplication;
float division;

int main()
{
    //welcome message
    cout << "Welcome to Simple C++ Calculator" << endl << "Coded by: teachmehowtoflai" << endl;
    Sleep(3000);
    for(;;)
    {
        //clearing
        system("cls");

        //asking for numbers
        cout << endl << endl;
        cout << "#--teachmehowtoflai--#" << endl;
        cout << "First Number: ";
        cin >> first;
        cout << "Second Number: ";
        cin >> second;
        cout << endl;

        //calculations
        addition = first + second;
        subtraction = first - second;
        multiplication = first * second;
        division = first / second;

        //sending calculations results
        cout << "[+] " << addition << endl;
        cout << "[-] " << subtraction << endl;
        cout << "[*] " << multiplication << endl;
        cout << "[/] " << division << endl;

        //some endlines
        cout << endl << endl;

        //waiting for keyboard interruption
        system("PAUSE");
    }
}
