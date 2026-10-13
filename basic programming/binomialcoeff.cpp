#include <iostream>
using namespace std;
//binomial coefficient
int nume(int n){
    int rem=1;
    if(n==0){
        return 1;
    }
    else{
        while(n>0){
            rem=rem*n;
            n--;
        }
        return rem;
    }
}



int main() {
    int n,r;
    cin>>n;
    cin>>r;
    cout<<nume(n)/(nume(r)*nume(n-r))<<endl;

    return 0;
}