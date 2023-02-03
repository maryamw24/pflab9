#include <iostream>
using namespace std;
main()
{
    int size;
    cout<<"Enter size of array:";
    cin>>size;
    int arr[size];
    int small = arr[0];
    for (int idx = 0 ; idx < size ; idx++)
    {
        cout<<"Enter number:";
        cin>>arr[idx];
    }
    for(int idx = 0 ; idx <size ; idx ++)
    {
        if (arr[idx] < small)
        {
            small = arr[idx];
        }
    }
    cout<<"Smallest :"<<small;

}