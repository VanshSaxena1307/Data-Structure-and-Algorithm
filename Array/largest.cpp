#include <iostream>
using namespace std;

int main() {
    int num;
    bool islargest;
    cout<<"Enter Number of element you want in array: ";
    cin>>num;

    int arr[num];
    int len = sizeof(arr)/sizeof(int);
    for(int i = 0; i<len; i++){
        cout<<"Enter Number: ";
        cin>>arr[i];
    }

    int largest = arr[0];

    for(int j = 0;j<len;j++){
        islargest = arr[j]>largest?true:false;
        if(islargest==true){
            largest = arr[j];
        }
    }
    
    cout<<"Largest Number You Entered is: "<<largest;
    return 0;
}