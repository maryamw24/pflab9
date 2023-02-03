#include <iostream>
using namespace std;
main()
{
    int size;
    int number;
    cout<<"Enter size of array:";
    cin>>size;
    cout<<"Enter ay number:";
    cin>>number;
    int arr[size];
    for (int idx = 0 ; idx < size ; idx++)
    {
        cout<<"Enter number:";
        cin>>arr[idx];
    }
    for(int idx = size -1  ; idx >= 0 ; idx --)
    {
        cout<<arr[idx]*number<<" ";

    }
}