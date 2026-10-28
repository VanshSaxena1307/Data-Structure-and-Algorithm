#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter number of elements in an Array: ";
    cin >> num;

    int arr[num];

    for (int i = 0; i < num; i++)
    {
        cout << "Enter element: ";
        cin >> arr[i];
    }

    for (int j = 0; j < num; j++)
    {
        bool alreadyCounted = false;

        // check if element already appeared
        for (int x = 0; x < j; x++)
        {
            if (arr[j] == arr[x])
            {
                alreadyCounted = true;
                break;
            }
        }

        if (alreadyCounted)
            continue;

        int count = 0;
        for (int k = 0; k < num; k++)
        {
            if (arr[j] == arr[k])
                count++;
        }

        cout << "Occurrence of " << arr[j] << " is " << count << endl;
    }

    return 0;
}
