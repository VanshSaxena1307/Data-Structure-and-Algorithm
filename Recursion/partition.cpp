// time complexity of QuickSort: 
// Best Case : Ω(Nlog₂N)
// Worst Case : O(N²)

#include <bits/stdc++.h>
using namespace std;

int Partition(vector<int> &arr, int low, int high)
{
    int i = low;
    int j = high + 1;
    int pivot = arr[low];
    do
    {
        do
        {
            i++;
        } while (arr[i] < pivot);

        do
        {
            j--;
        } while (arr[j] > pivot);
        
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    } while (i < j);
    swap(arr[low], arr[j]);
    return j;
}

void QuickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int j = Partition(arr, low, high);
        QuickSort(arr, low, j - 1);
        QuickSort(arr, j + 1, high);
    }
}

int main()
{
    vector<int> arr;
    arr.push_back(100);
    arr.push_back(50);
    arr.push_back(200);
    arr.push_back(60);
    arr.push_back(300);
    arr.push_back(20);
    arr.push_back(90);
    arr.push_back(500);
    arr.push_back(10);
    arr.push_back(250);
    int low = 0;
    int high = arr.size() - 1;
    QuickSort(arr, low, high);

    for(int x : arr){
        cout << x << " ";
    }
}