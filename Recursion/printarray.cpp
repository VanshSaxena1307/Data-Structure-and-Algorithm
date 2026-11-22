#include <bits/stdc++.h>
using namespace std;
void PrintElements(vector<int>arr, int i){
    if(i<arr.size()){
        cout<<arr[i]<<" ";
        PrintElements(arr,i+1);
    }
    else{
        cout<<endl;
        exit(1);
    }
}
void PrintReverse(vector<int>arr, int i){
    
    int n = arr.size();
    if(i<n){
        cout<<arr[n-i-1]<<" ";
        PrintReverse(arr, i+1);
    }
    else{
        exit(1);
    }
}
void PE(vector<int>&arr, int i){
    if(i<arr.size()){
        PE(arr, i+1);
        cout<<arr[i]<<" ";
    }
}

int main(){
    vector<int>arr;
    arr.push_back(2);
    arr.push_back(4);
    arr.push_back(6);
    arr.push_back(8);
    arr.push_back(10);
    int i = 0;
    // PrintElements(arr , i);
    // PrintReverse(arr , i);
    PE(arr,i);
    return 0;
}