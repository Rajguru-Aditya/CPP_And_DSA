#include <iostream>
using namespace std;

int add(int num1, int num2)
{
    cout << num1 * num2 << endl;
}

void fib(int num3)
{
    int t1 = 0;
    int t2 = 1;
    int nextTerm;
    for (int i = 1; i <= num3; i++)
    {
        cout << t1 << endl;
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return;
}

int main()
{
    int num1, num2, num3;
    cout << "Enter 2 numbers to multiply:" << endl;
    cin >> num1 >> num2;
    add(num1, num2);

    cout << "Enter range for fibonacci  series" << endl;
    cin >> num3;
    fib(num3);
    return 0;
}