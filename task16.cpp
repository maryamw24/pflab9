#include <iostream>
using namespace std;
main()
{
    int money[4];
    float price;
    cout << "Enter the price of thing:";
    cin >> price;
    cout << "Enter number of quaters:";
    cin >> money[0];
    cout << "Enter number of dimes:";
    cin >> money[1];
    cout << "Enter number of nickels:";
    cin >> money[2];
    cout << "Enter number of pennis:";
    cin >> money[3];
    float total = money[0] * 0.25 + money[1] * 0.10 + money[2] * 0.05 + money[3] * 0.01;
    if (total >= price)
    {
        cout << "TRUE!";
    }
    else
    {
        cout << "FALSE!";
    }
}