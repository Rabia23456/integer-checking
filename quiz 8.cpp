#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter an integer";
    cin >> num;
    if (num % 2 == 0)
        cout << "Number that you enter is even";
    else
        cout << "Number that you enter is odd";
    return 0;
}