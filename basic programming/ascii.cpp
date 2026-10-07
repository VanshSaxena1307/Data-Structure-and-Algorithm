#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string str;
    getline(cin,str);
    int ascii_value,count=0;
    for(int i=0;i<str.length();i++){
        ascii_value=str[i];
        cout<<ascii_value<<" ";
        count++;
    }
    cout<<endl;
    cout<<"Length of String entered: "<<count;
    return 0;
}