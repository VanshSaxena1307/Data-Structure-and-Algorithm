#include <bits/stdc++.h>
using namespace std;

void dtb(int n){
    if(n>0){
        dtb(n/2);
        cout<<n%2;
    }
}

int main(){
    int n = 51;
    dtb(n);
    return 0;
}
