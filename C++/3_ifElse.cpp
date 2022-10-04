#include <iostream>

using namespace std;

int main()
{

    short age;
    cout << "Enter your age" << endl;
    cin >> age;

    // if (age >= 18)
    // {
    //     cout << "You can vote";
    // }
    // else
    //     cout << "You are minor, See you in future voting list";

    switch (age)
    {
    case 12:
        cout<<"You are 12 Years old";
        break;
    case 18:
        cout<<"You are 18 Years old";
        break;

    default:
        cout<<"You are neither 12 nor 18";
        //break;
    }
    return 0;
}