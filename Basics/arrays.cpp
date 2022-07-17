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
        cout << "Element " << i << ": ";
        cin >> myArray[i];
    }
    for (int i = 0; i < sizeof(myArray) / sizeof(int); i++)
    {
        cout << myArray[i] << endl;
    }
}