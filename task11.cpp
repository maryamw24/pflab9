#include<iostream>
using namespace std;
main()
{
    string name;
    bool present = false;
    char letter;
    cout<<"Enter name/ sentence:";
    getline(cin, name);
    cout<<"Enter letter to find:";
    cin>>letter;
    
    for(int i = 0; i != '\0'; i ++)
    {
        if (name[i] == letter )
        {
            present = true;
            break;
        }
    }
    if (present == true)
    {
        cout<<"PRESENT!!";
    }
    else 
    {
        cout<<"ABSENT";
    }

}