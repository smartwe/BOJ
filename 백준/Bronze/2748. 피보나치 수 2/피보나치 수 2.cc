#include <bits/stdc++.h>

using namespace std;



long long dp[100] = { 0, };

long long fibo(int n)
{
    if(n == 1)
    {
        dp[n] = 1;
        return 1;
    }
    if(n == 2)
    {
        dp[n] = 1;
        return 1;
    }
    if(dp[n] != 0)
    {
        return dp[n];
    }
    
    dp[n] = fibo(n - 1) + fibo(n -2);
    return dp[n];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;
    cout << fibo(n);

    return 0;

}
