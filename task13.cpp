#include <iostream>
using namespace std;
main()
{
    int arr1[2];
    cout << "Enter first number of array1:";
    cin >> arr1[0];
    cout << "Enter second number of araay1:";
    cin >> arr1[1];
    int size;
    cout << "Enter size of second array:";
    cin >> size;
    int arr2[size];
    for(int i = 0; i < size; i++)
    {
        cout << "Enter numbers for array:";
        cin >> arr2[i];
    }
    cout<<arr1[0]<<",";
    for(int i = 0; i < size ; i++)
    {
        cout<<arr2[i]<<",";
    }
    cout << arr1[1];
}