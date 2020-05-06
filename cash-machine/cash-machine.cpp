#include <iostream>

using namespace std;

string PIN;

int main()
{
    cout << "Welcome to our bank! We will rob you of all the money!" << endl;
    cout << "Enter your PIN number: ";
    cin >> PIN;

    if( PIN == "1729" )
    {
        cout << "Correct PIN." << endl;
    }
    else
    {
        cout << "Incorrect PIN." << endl;
    }

    return 0;
}