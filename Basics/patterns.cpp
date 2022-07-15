#include <iostream>
using namespace std;

int main()
{
    int row, col;

    // Patterns with stars

    // cout << "Enter number of rows and columns: " << endl;
    // cin >> row >> col;

    // for (int i = 1; i <= row; i++)
    // {
    //     for (int j = 1; j <= col; j++)
    //     {
    //         cout << " * ";
    //     }
    //     cout << endl;
    // }

    // Hollow Pattern

    // for (int i = 1; i <= row; i++)
    // {
    //     for (int j = 1; j <= col; j++)
    //     {
    //         if (i == 1 || i == row || j == 1 || j == col)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    //  Invertted Pyramid

    cout << "Enter number of rows: " << endl;
    cin >> row;

    // for (int i = row; i >= 1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // Half Pyramid 180deg rotation

    // for (int i = 1; i <= row; i++)
    // {
    //     for (int j = 1; j <= row; j++)
    //     {
    //         if (j <= row - i)
    //         {
    //             cout << " ";
    //         }
    //         else
    //         {
    //             cout << "*";
    //         }
    //     }
    //     cout << endl;
    // }

    // Half pyramid witth numbers

    // for (int i = 1; i <= row; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }

    // Floyd's Triangle

    // int count = 1;

    // for (int i = 1; i <= row; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << count << " ";
    //         count++;
    //     }
    //     cout << endl;
    // }

    // Butterfly pattern

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        int space = 2 * row - 2 * i;
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = row; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        int space = 2 * row - 2 * i;
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}