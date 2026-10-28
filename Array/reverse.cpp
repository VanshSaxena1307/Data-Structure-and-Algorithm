#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter number of element you want to input in array: ";
    cin >> num;
    // Input Elements in Array
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cout << "Enter elements: ";
        cin >> arr[i];
    }

    // Store reversed Array 
    int rev[num];
    int a = num - 1;
    for (int i = 0; i < num; i++)
    {
        rev[i] = arr[a];
        a--;
    }

    // Print Actual Array
    cout << "Actual Form: [ ";
    for (int j = 0; j < num; j++)
    {
        cout << arr[j] << " ";
    }
    cout << "]" << endl;

    // Print Reversed array
    cout << "Reversed form: [ ";
    for (int j = 0; j < num; j++)
    {
        cout << rev[j] << " ";
    }
    cout << "]";
    return 0;
}