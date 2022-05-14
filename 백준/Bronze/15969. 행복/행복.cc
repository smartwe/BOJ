#include <iostream>
#include <algorithm>

using namespace std;

int s[1010];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;

    cin >> N;
    for(int i = 0;i < N ;i++)
    {
        cin >> s[i];
    }
    sort(s, s + N);

    cout << (s[N - 1] - s[0]);

    return 0;
}