#include <iostream>
using namespace std;

int main()
{
    //---------- Basic Input and output ---------
    // int a;
    // int b;
    // cout << "Enter value of a\n";
    // cin >> a;
    // cout << "Enter value of b\n";
    // cin >> b;
    // cout << "Addition of a and b: " << a + b;

    // ----- IF Else ----------
    // int savings;
    // cout << "Enter This Month's Savings:\n";
    // cin >> savings;

    // if (savings > 5000)
    // {
    //     if (savings > 10000)
    //     {
    //         cout << "Buy Isolate Whey Protein\n";
    //     }
    //     else
    //     {
    //         cout << "Buy Concentrate Whey Protein\n";
    //     }
    // }
    // else if (savings > 2000)
    // {
    //     cout << "Buy Earphones\n";
    // }

    // else
    // {
    //     cout << "Save More Next Month!\n";
    // }

    int a, b, c;
    cout << "Enter values for a,b,c:\n";
    cin >> a >> b >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << a << " is largest";
        }
        else
        {
            cout << c << " is largest";
        }
    }
    else
    {
        if (b > c)
        {
            cout << b << " is largest";
        }
        else
        {
            cout << c << " is largest";
        }
    }

    return 0;
}