#include <iostream>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void onescomplement(void);
    void display(void);
};

void binary :: read(void)
{
    cout << "Enter a binary number: ";
    cin >> s;
}

void binary :: chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary :: onescomplement(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
    }
}
void binary :: display(void)
{
    cout << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{
    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.onescomplement();
    b.display();
}

