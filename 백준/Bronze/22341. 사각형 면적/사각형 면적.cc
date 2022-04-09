#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m, x, y, c;
    cin >> n >> c;
    m = n;
    while (c--)
    {
        cin >> x >> y;
        if (x < n && y < m)
        {
            if (x * m >= n * y)
            {
                n = x;
            }
            else
            {
                m = y;
            }
        }
    }
    cout << n * m;

    return 0;
}