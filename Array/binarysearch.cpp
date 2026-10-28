#include <iostream>
using namespace std;

int main() {
    int arr [5] = {1,2,3,4,5};
    int start = 0;
    int end = 4;
    int key;
    cout<<"Enter to search: ";
    cin>>key;
    while (start<=end){
        int mid = (start + end)/2;
        if(arr[mid] == key){
            cout<<"Found at Index: "<<mid;
            break;
        }
        else if(arr[mid]<key){
            start = mid + 1;
        }
        else {
            end = mid-1;
        }
    }
    return -1;
}