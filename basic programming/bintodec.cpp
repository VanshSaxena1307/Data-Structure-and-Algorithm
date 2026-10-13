#include <iostream>
#include <cmath>
using namespace std;

//Convert Binary Number to Decimal Number
 
int main()
{
    int num, rem, dec = 0, a = 0;
    cin >> num;
    while (num > 0){
        rem = num % 10;
        if (rem == 1){
            dec += pow(2, a);
        }
        else if (rem == 0){
            dec += 0;
        }
        else{
            cout << "Not a valid Binary Number";
            break;
        }
        a++;
        num = num / 10;
    }
    cout << dec;
    return 0;
}