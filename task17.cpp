#include <iostream>
using namespace std;
main()
{
    string word;
    cout << "Enter a word / sentence:";
    getline(cin, word);
    int count = word. length();
    for (int i = 0; i < count; i++)
    {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u')
        {
            continue;
        }
        cout<<word[i];
    }
}
