#include <iostream>
using namespace std;

int divs(int a, int b)
{
    int ans,c;
    if (a>b){
        c = a;
    }
    else 
        c = b;
    
    // for (int i = c; i >= 1; i--)
    for(int i = 0;i<=c;i++)

    {
        if (a % i == 0 && b % i == 0)
        {
            ans = i;
        }
    }
    return ans;
}

int main()
{
    int a = 4,b = 6;

    cout << divs(a, b);
}