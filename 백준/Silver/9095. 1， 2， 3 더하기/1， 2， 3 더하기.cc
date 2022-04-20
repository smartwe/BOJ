#include <iostream>
#include <algorithm>

using namespace std;

int m[13];

int f(int n)
{
    if (n == 1)
    {
        m[1] = 1;
        return 1;
    }
    if (n == 2)
    {
        m[2] = 2;
        return 2;
    }
    if (n == 3)
    {
        m[3] = 4;
        return 4;
    }
    else
    {
        if (m[n] > 0)
        {
            return m[n];
        }
        else
        {
            m[n] = f(n - 1) + f(n - 2) + f(n - 3);
            return m[n];
        }
    }
}

int main()
{
    int n;
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> n;
        cout << f(n) << "\n";
    }
    return 0;
}