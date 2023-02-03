#include <iostream>
using namespace std;
main()
{
    int resistor;
    float sum = 0;
    cout<<"Enter number of resistors";
    cin>>resistor;
    float resistance [resistor];
    for(int i = 0; i < resistor; i++)
    {
        cout<<"Enter resistances:";
        cin>>resistance[i];
        sum = sum + resistance[i];
    }
    cout<<"Sum of resistances is :"<<sum;
}