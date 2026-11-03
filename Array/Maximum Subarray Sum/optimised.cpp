#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int num;
    cout<<"enter Number: ";
    cin >> num;

    int arr[num];
    for(int i = 0; i < num; i++){
        cin >> arr[i];
    }

    int largest = INT_MIN;

    for(int i = 0; i < num; i++){
        int sum = 0;
        for(int j = i; j < num; j++){
            sum += arr[j];
            largest = max(largest, sum);
        }
    }

    cout << "largest: "<<largest;
    return 0;
}
