#include <iostream>
using namespace std;

int fact(int n)
{
    int rem = 1;
    if (n == 0)
    {
        return 1;
    }
    else
    {
        while (n > 0)
        {
            rem = rem * n;
            n--;
        }
    }
    return rem;
}

int main()
{
    int num, fa;
    cin >> num;
    fa = fact(num);
    cout << fa;
    return 0;
}