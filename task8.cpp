#include <iostream>
using namespace std;
main()
{
    string name;
    int count= 0;
    cout<<"Enter name:";
    getline(cin, name);
    for(int i= 0 ; name[i] != '\0'; i++)
    {
        count++;
    }
    cout<<count;
}