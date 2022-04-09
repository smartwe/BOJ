#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        int t = i;
        int s = 0;
        while (t)
        {
            s += t % 10;
            t /= 10;
        }
        if (i % s == 0)
        {
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}