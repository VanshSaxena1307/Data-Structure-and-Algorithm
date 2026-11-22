#include <bits/stdc++.h>
using namespace std;
int power(int a, int n){
    if( n == 0 ) return 1;
    else return a*power(a,n-1);
}
int main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, n;
    cin>>a>>n;
    int ans = power(a,n);
    cout<<ans;
    return 0;
}