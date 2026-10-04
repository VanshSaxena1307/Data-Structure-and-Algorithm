#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter Your Age: ";
    cin >> age;
    if (age >= 18)
    {
        cout << "Yes, You can vote" << endl;
    }
    if (age>=45){
        cout<<"Yes you can even contest election";
    }
    else{
        cout<<"No, You can't Vote"<<endl;
    }
    return 0;
}