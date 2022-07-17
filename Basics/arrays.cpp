#include <iostream>
using namespace std;

int main()
{

    int arrSize;
    cout << "Enter size of array" << endl;
    cin >> arrSize;
    int myArray[arrSize];
    cout << "Enter array elements" << endl;
    for (int i = 0; i < arrSize; i++)
    {
        cin >> myArray[i];
    }
    for (int i = 0; i < sizeof(myArray) / sizeof(int); i++)
    {
        cout << myArray[i] << endl;
    }

    // Max and Min element in array
    int maxNum = INT16_MIN;
    int minNum = INT16_MAX;

    for (int i = 0; i < arrSize; i++)
    {
        if (myArray[i] > maxNum)
        {
            maxNum = myArray[i];
        }
        if (myArray[i] < minNum)
        {
            minNum = myArray[i];
        }
    }

    cout << "Max num: " << maxNum << endl;
    cout << "Min num: " << minNum << endl;
}