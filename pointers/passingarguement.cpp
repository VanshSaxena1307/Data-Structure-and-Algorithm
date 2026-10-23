#include <iostream>
using namespace std;

// pass by value
//  void changeA(int a){
//      a=20;
//      cout<<a<<endl;
//  }

// pass by reference using pointer
//  void changeA(int *ptr){
//      *ptr = 20;
//      cout<<*ptr<<"\n"; }

// pass by reference using refrence variable
void changeA(int &a)
{
    a = 20;
    cout << a << "\n";
}

int main()
{

    int a = 10;
    changeA(a);

    cout << a << endl;
    return 0;
}