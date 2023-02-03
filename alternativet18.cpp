#include <iostream>
using namespace std;

main()
{
    string test="abcdefghijklmnopqrstuvwxyz";
    string text;
    cout << "Enter String: ";
    getline(cin, text);

    int length = text.length();   

    char character= name[0];
    for (int index = 0; index < length; index++)
    {
        char character=name[index];
        for(int idx=0; idx<=25;idx++)
        {
            if(character==test[idx])
            {

                cout <<test[(idx+1)%26];
            }
        }
    }
}