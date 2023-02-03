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
    for(int i = count; i >=0 ; i--)
    {
        cout<<name[i];
    }
}