#include <iostream>
#include <cmath>
using namespace std;
int main(){
    /*int num,count,sum=0;
    cin>>num;
    while (num>0){
        sum+=num%10;
        num/=10;
    }
    cout<<sum;*/
    int num, count = 0, b, rev = 0;
    cin >> num;
    while(num>0){
        int lastdig=num%10;
        rev=rev*10+lastdig;
        num/=10;
    }
    cout<<rev;
    return 0;
}