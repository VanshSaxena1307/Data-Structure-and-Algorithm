#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    if (n1 > n2)
    {
        cout << n1 << " is largest";
    }
    else if(n1==n2){
        cout<<"Both are equal";
    }
    else
    {
        cout << n2 << " is largest";
    }
}