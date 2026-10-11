#include <iostream>
using namespace std;

int main(){
    int num,a=1;
    cin>>num;
    while (a<11){
        cout<<num<<" x "<<a<<" = "<<num*a<<endl;
        a++;
    }
    return 0;
}