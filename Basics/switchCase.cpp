#include <iostream>
using namespace std;

int main()
{
    char inputChar;
    cout << "Enter a character a, b or c:" << endl;
    cin >> inputChar;

    switch (inputChar)
    {
    case 'a':
        cout << "Hello" << endl;
        break;

    case 'b':
        cout << "Namaste" << endl;
        break;

    case 'c':
        cout << "Ni Hao" << endl;
        break;

    case 'd':
        cout << "Hola" << endl;
        break;

    case 'e':
        cout << "Annyeonghaseyo" << endl;
        break;

    case 'f':
        cout << "Konnichiwa" << endl;
        break;

    default:
        cout << "Invalid  input" << endl;
        break;
    }
}