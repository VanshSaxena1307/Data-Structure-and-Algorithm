#include <bits/stdc++.h>
using namespace std;
int digit(int a)
{
    if (a == 0)
        return 0;
    else
        return (a % 10) + digit(a / 10);
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    cin >> a;
    int ans = digit(a);
    cout << ans;
    return 0;
}