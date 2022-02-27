#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int t = 0;
    int n = 0;
    int cnt = 0;
    while (cnt < N)
    {
        n++;
        t = n;
        while (t != 0)
        {
            if (t % 1000 == 666)
            {
                cnt++;
                break;
            }
            else
            {
                t /= 10;
            }   
        }


    }
    cout << n;
    return 0;
}

// https://cocoon1787.tistory.com/155 참고