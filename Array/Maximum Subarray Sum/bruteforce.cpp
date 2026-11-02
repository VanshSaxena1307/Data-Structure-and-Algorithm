#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter number of elements you want in array: ";
    cin >> num;
    int arr[num];
    for (int a = 0; a < num; a++)
    {
        cout << "Enter number: ";
        cin >> arr[a];
    }
    int SUM[100];
    int z = 0;
 
    // Main Part

    for (int i = 0; i < num; i++)
    {
        // print subarray

        for (int j = i; j < num; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                // Adds Elements of Subarray
                sum = sum + arr[k];
            }

            //Appends them in Empty Array
            SUM[z] = sum;
            z++;
        }
    }

    int largest = SUM[0];
    int smallest = SUM[0];


    //Check for largest Array

    for (int x = 0; x < z; x++)
    {
        largest = max(largest,SUM[x]);
        smallest = min(smallest,SUM[x]);
    }
    cout << largest<<endl;
    cout << smallest;
    return 0;
}
