#include <iostream>
using namespace std;
void countSort(int arr[], int n);
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    countSort(arr, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
void countSort(int arr[], int n)
{
    int max = arr[0];
    // Find maximum element
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    // Create count array
    int count[max + 1] = {0};
    // Store frequency of the elements
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    // Update count[] to cumulative sum
    for (int i = 1; i <= max; i++)
    {
        count[i] += count[i - 1];
    }
    // Output array declaration
    int output[n];
    // Build output array (stable sort)
    for (int i = n - 1; i >= 0; i--)
    {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }
    // Copy sorted output array to original array
    for (int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
}