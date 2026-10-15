#include <iostream>
using namespace std;

void hell();
void hell(){
    cout<<"Hello World"<<endl;
}

void assistant(){
    hell();
    cout<<"Workdone"<<endl;
}

int main() {
    assistant();
    return 0;
}