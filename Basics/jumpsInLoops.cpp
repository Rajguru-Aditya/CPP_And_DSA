#include <iostream>
using namespace std;

int main()
{

    // Break and Continue

    // for (int i = 0; i <= 100; i++)
    // {
    //     if (i % 5 == 0)
    //     {
    //         continue;
    //     }
    //     cout << i << endl;
    // }

    // Prime Number

    // int primeNum;
    // int counter;
    // cout << "Enter number" << endl;
    // cin >> primeNum;

    // for (counter = 2; counter < primeNum; counter++)
    // {
    //     if (primeNum % counter == 0)
    //     {
    //         cout << "Not a prime number" << endl;
    //         break;
    //     }
    // }
    // if (counter == primeNum)
    // {
    //     cout << "Prime number" << endl;
    // }

    // Prime numbers in a range  with nested for loop

    int num1;
    int num2;
    cout << "Enter 2 numbers for range: " << endl;
    cin >> num1 >> num2;

    for (int num = num1; num <= num2; num++)
    {
        int i;
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                break;
            }
        }
        if (i == num)
        {
            cout << num << endl;
        }
    }

    return 0;
}