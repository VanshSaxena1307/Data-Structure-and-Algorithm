#include <bits/stdc++.h>
using namespace std;
int fact(int a){
    if( a == 0 ) return 1;
    else return a*fact(a-1);
}
int main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    cin>>a;
    int ans = fact(a);
    cout<<ans;
    return 0;
}