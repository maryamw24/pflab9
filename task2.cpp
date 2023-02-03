#include <iostream>
using namespace std;
main()
{
    int size;
    int sum = 0;
    cout<<"Enter size of array:";
    cin>>size;
    int number[size];
    for(int i = 0; i < size; i ++)
    {
        cout<<"Enter number:";
        cin>>number[i];
        sum = sum + number[i];
    }
    cout<<"Sum is :"<<sum<<endl;
    int average = sum / size;
    cout<<"Average: "<<average ;
}
