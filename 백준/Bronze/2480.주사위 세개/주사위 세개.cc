#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c, money;
    cin >> a >> b >> c;
    int arr[] = {a, b, c};
    if (a == b && b == c)
    {
        money = 10000 + a * 1000;
    }
    else if (a == b|| b == c || a == c)
    {
        if (a == b)
        {
            money = 1000 + a * 100;
        }
        else if (b == c)
        {
            money = 1000 + b * 100;
        }
        else
        {
            money = 1000 + a * 100;
        }
    }
    else
    {
        sort(arr, arr + 3);
        money = arr[2]*100;
    }

    cout << money;

    return 0;
}