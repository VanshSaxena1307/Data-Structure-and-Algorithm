#include <iostream>
using namespace std;

int main() {
    int num,sub;
    cin>>num;
    cout << "Number of subarray it can print: ";
    sub = (num*(num+1)/2);
    cout<<sub;
    return 0;
}