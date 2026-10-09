#include<iostream>

#include<iomanip>

using namespace std;

int main()
{

    // char a = '4';
    // cout<<a<<endl;
    // a = 'b';
    // cout<<a<<endl;

    // // Constants
    // const char b = '1';
    // cout<<b<<endl;
    // // b = '2' --> This will trow an error

    // int a=3,b=54,c=4845;
    // cout<<"The value of a: "<<a<<endl;
    // cout<<"The value of b: "<<b<<endl;
    // cout<<"The value of c: "<<c<<endl;

    // cout<<"The value of a: "<<setw(4)<<a<<endl;
    // cout<<"The value of b: "<<setw(4)<<b<<endl;
    // cout<<"The value of c: "<<setw(4)<<c<<endl;


    // Operator Precidence
    int a=3,b=5;
    // int c = (a*5)+b;
    int c = ((((a*5)+b)-45)+87);

    cout<<c;





    return 0;
}