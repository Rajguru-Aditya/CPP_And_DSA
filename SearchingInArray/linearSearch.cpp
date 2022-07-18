#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int inputA;
    cout << "Enter array limit" << endl;
    cin >> inputA;

    int arr[inputA];
    for (int i = 0; i <= inputA; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enterr element to search" << endl;
    cin >> key;

    cout << linearSearch(arr, inputA, key) << endl;

    return 0;
}