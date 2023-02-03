#include <iostream>
using namespace std;
main()
{
    bool isPresent = false;
    int size;
    int num;
    cout<<"Enter the size of array:";
    cin>> size;
    int number[size];
    cout<<"Enter a number you want to search:";
    cin>> num;
    for (int idx = 0 ; idx < size ; idx++)
    {
        cout<<"Enter number:";
        cin>>number[size];

    }
    for (int idx = 0 ; idx < size ; idx++)
    {
        if (number[size] == num)
        {
            isPresent = true;
            break;
        }
    }
    if (isPresent = true)
    {
        cout<<"IS PRESENT!";
    }
    else 
    {
        cout<<"ABSENT!";
    }
}