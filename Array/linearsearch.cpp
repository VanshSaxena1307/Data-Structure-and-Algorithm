#include <iostream>
using namespace std;

int main()
{
    // Input length of an array
    int num;
    cout << "Enter number of elemments you want to input: ";
    cin >> num;

    // Enter Elements in Array
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cout << "Enter number: ";
        cin >> arr[i];
    }

    // Check for occurences
    int target, count = 0;
    int index[num];
    cout << "Enter number to find out: ";
    cin >> target;
    for (int j = 0; j < num; j++)
    {
        if (arr[j] == target)
        {
            index[count] = j;
            count++;
        }
    }

    // Final Output Line
    cout << target << " have occurences: " << count << endl;

    cout << "At indices: [";
    for (int j = 0; j < count; j++)
    {
        cout << index[j] << " ";
    }
    cout << "]";
    return 0;
}