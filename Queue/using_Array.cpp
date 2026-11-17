#include <bits/stdc++.h>
using namespace std;

void ArrayInsertion(vector<int> arr, int i, int data)
{

    int N = arr.size();
    arr.push_back(0);
    for (int j = N - 1, j > i, j--)
    {
        arr[j + 1] = arr[j];
    }
    arr[i] = data;
}
int ArrayDeletion(vector<int> arr, int i)
{
    int temp = arr[i];
    int N = arr.size();
    for (int j = i + 1, j < N; j++)
    {
        arr[j - 1] = arr[j];
    }
    arr.pop_back();
    return temp;
}

void EnQueue(vector<int> arr, int data)
{
    int i = 0;
    int N = arr.size();
    while (i < N && data >= arr[i])
    {
        i++;
        ArrayInsertion(PQ, i, data);
    }
}

int DeQueue(vector<int>arr){
    int N = arr.size();
    int x = ArrayDeletion(PQ, N);
    return x;
}

int main(){
    vector<int>PQ;
}