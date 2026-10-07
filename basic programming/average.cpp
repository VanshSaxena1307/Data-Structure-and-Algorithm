#include <iostream>
using namespace std;
int main()
{
    /*int sci, eng, math, sum;
    float avg;
    cout << "Enter marks of Science: ";
    cin >> sci;

    cout << "Enter marks of Maths: ";
    cin >> math;

    cout << "Enter marks of English: ";
    cin >> eng;

    sum = sci + math + eng;
    avg = sum / 3.0;

    cout << "Average marks: " << avg;*/

    int pencil,pen,eraser;
    float tax,total;
    cout<<"Enter number of pencil required: ";
    cin>>pencil;

    cout<<"Enter number of pen required: ";
    cin>>pen;

    cout<<"Enter number of eraser required: ";
    cin>>eraser;

    total= (pencil*7)+(pen*15)+(eraser*5);

    cout<<"Cost of Pencil(s): "<<pencil*7<<endl;
    cout<<"Cost of Pen(s): "<<pen*15<<endl;
    cout<<"Cost of Eraser(s): "<<eraser*5<<endl;
    cout<<"Total Bill amount after adding 18% gst"<<endl;

    tax= ((total*18*1)/100);
    cout<<total+tax;
}