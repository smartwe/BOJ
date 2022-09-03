#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, T;

    cin >> T;
    for(int i = 0;i < T;i++)
    {
        cin >> a >> b;
        if(b%4 == 0)
        {
            b = 4;
        }
        else b %= 4;
        a %= 10;

        if((int)pow(a, b) % 10 == 0)
        {
            cout << "10" << "\n";
        }
        else
        {
            cout << (int)pow(a, b) % 10 << "\n"; 
        }

    }

    return 0;
}