#include <iostream>
using namespace std;

int main()
{
    int marks[2][3];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter the element at " << i<<","<< j << " position: ";
            cin >> marks[i][j];
        }
    }

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << "Element at " << i <<","<< j << " position: " << marks[i][j] << endl;
            }
        }
    return 0;
}