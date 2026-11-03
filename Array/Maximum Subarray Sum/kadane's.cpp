#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int num;
    cout << "enter Number: ";
    cin >> num;

    int arr[num];
    for(int i = 0; i < num; i++){
        cin >> arr[i];
    }

    int currentSum = 0;
    int largest = INT_MIN;

    for(int i = 0; i < num; i++){
        currentSum += arr[i];

        largest = max(largest, currentSum);

        if(currentSum < 0){
            currentSum = 0;
        }
    }

    cout << "largest: " << largest;
    return 0;
}
