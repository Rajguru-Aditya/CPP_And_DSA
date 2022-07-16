#include <iostream>
using namespace std;

int main()
{
    int num1;
    cout << "Enter number to reverse:" << endl;
    cin >> num1;

    int reverse = 0;

    while (num1 > 0)
    {
        int lastDigit = num1 % 10;
        reverse = reverse * 10 + lastDigit;
        num1 = num1 / 10;
    }
    cout << reverse << endl;
}