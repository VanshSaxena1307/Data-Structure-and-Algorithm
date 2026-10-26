#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int len = sizeof(arr)/sizeof(int);

//INPUT
    for (int i=0;i<len;i++){
        cout<<"Enter number to input in array: ";
        cin>>arr[i];
    }
//OUTPUT
    for (int j=0;j<len;j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}