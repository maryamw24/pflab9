#include <iostream>
using namespace std;
main()
{
    int size;
    int num;
    cout << "Enter size of array:";
    cin >> size;
    int number[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter number:";
        cin >> number[i];
    }
    cout << "Enter number to check:";
    cin >> num;
    for (int i = 0; i < size; i++)
    {
        if (number[i] == num)
        {
            cout << "Already Entered!!";
        }
    }
}