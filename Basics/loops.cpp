#include <iostream>
using namespace std;

int main()
{

    int n;
    int sum = 0;
    int inputA;
    int inputB;

    // FOR loop

    cout << "Enter value of n" << endl;
    cin >> n;

    for (int counter = 1; counter <= n; counter++)
    {
        sum = sum + counter;
    }

    cout << "Sum:\n"
         << sum << endl;

    // WHILE loop

    cout << "Input value of A:" << endl;
    cin >> inputA;
    while (inputA > 3)
    {
        cout << "Input value of A:" << endl;
        cout << inputA << endl;
        cin >> inputA;
    }

    // DO WHILE loop

    cout << "Input value of B:" << endl;
    cin >> inputB;

    do
    {
        cout << "Input value of B:" << endl;
        cout << inputB << endl;
        cin >> inputB;
    } while (inputB > 3);

    return 0;
}