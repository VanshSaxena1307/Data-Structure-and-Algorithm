#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter number of elements you want in array: ";
    cin >> num;
    int arr[num];
    for (int a = 0; a < num; a++){
        cout << "Enter number: ";
        cin >> arr[a];
    }

    // Main Part

    for (int i = 0; i < num; i++){
        cout << "Start: " << i << endl;

        // print subarray

        for (int j = i; j < num; j++){
            
            cout << "[ ";
            for (int k = i; k <= j; k++){

                cout << arr[k] << " ";
                
            }
            cout << "]" <<endl;
        }
    }
    
    return 0; 
}
