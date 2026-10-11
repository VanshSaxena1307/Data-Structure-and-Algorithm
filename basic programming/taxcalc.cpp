#include <iostream>
using namespace std;
int main(){
    float sal;
    cout<<"Know your tax slab";
    cout<<"Enter your salary in lakhs: ";
    cin>>sal;
    if(sal<5){
        cout<<"You are in 0% tax slab"<<endl;
        cout << "Tax to be paid by you is 0 Rs.";
    }
    else if(sal>=5 && sal<10){
        cout<<"You are in 20% tax slab"<<endl;
        cout << "Tax to be paid by you is: "<<sal*100000*0.2;
    }
    else{
        cout<<"You are in 30% tax slab"<<endl;
        cout << "Tax to be paid by you is: "<<sal*100000*0.3;
    }
}