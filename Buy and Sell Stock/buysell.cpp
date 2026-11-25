#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter no. of days you want to check for: ";
    cin>>num;
    int arr[num];
    for(int a = 0; a <num;a++){
        cout<<"Enter Stock price on "<<a+1<<" day: ";
        cin>>arr[a];
    }

    int minimum = arr[0];
    int index1 = 0, index2 = 0;
    for (int i = 0; i < num; i++)
    {
        if (minimum > arr[i])
        {
            minimum = min(minimum, arr[i]);
            index1 = i;
        }
    }
    // cout<<minimum;
    int maximum = arr[index1];
    for (int j = index1; j < num; j++)
    {
        if (maximum < arr[j])
        {
            maximum = max(maximum, arr[j]);
            index2 = j;
        }
    }

    if (index2 < index1)
    {
        cout << "Stock Price are continuously decreasing so there is 0 profit";
    }
    else if(maximum == minimum){
        cout<<"This stock has constant prices.....Not worth buying";
    }
    else
    {
        cout <<"If you buy this stock on day "<<index1+1<<" and sold it on "<<index2+1<<" you can gain maximum profit that is of: "<< maximum - minimum;
    }
    // cout<<maximum;
    // cout<<arr[index2]-arr[index1];
    return 0;
}