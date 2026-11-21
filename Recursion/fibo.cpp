#include <bits/stdc++.h>
using namespace std;

vector<long long> dat(1000001, -1);

long long fibo(int n)
{
    if (n == 1)
        return 0;

    if (n == 2)
        return 1;

    if (dat[n] != -1)
        return dat[n];

    dat[n] = fibo(n - 1) + fibo(n - 2);

    return dat[n];
}
int main()
{
    int t = 1;
    while (t < 100000)
    {
        cout << t << ": " << fibo(t) << endl;
        t++;
    }
    return 0;
}
