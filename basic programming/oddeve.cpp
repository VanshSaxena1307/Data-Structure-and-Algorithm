#include <iostream>
using namespace std;

void oddeve(int n);
void oddeve(int n)
{
    bool isoddeve;
    isoddeve = n % 2 == 0 ? true : false;
    
    if(isoddeve==1){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }
}

int main()
{
    int num1;
    cin >> num1;
    oddeve(num1);
    cout<<endl;
    cout<<(num1%2==0?"Even":"Odd");
    return 0;
}