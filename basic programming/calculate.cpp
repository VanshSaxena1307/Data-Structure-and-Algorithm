#include <iostream>
using namespace std;

void calculate(int a, int b){
    cout<<"There Sum is: "<<a+b<<endl;
    cout<<"The Diffrence is: "; 
    if(a>b){
        cout<<a-b<<endl;
    }
    else{
        cout<<b-a<<endl;;
    }
    cout<<"There Product is: "<<a*b<<endl;
    cout<<"There Division is: "<<a/b<<endl;
}

int main() {
    int num1,num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<endl;

    cout<<"Enter second number: ";
    cin>>num2;
    cout<<endl;
    
    calculate(num1,num2);
    return 0;
}