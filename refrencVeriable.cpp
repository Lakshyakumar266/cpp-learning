#include<iostream>

using namespace std;

int c = 10;
int main()
{

    // int a, b, c;

    // cout<<"enter value of a: ";
    // cin>>a;
    // cout<<"enter value of b: ";
    // cin>>b;
    // cout<<"enter value of c: ";
    // cin>>c;

    // cout<<"sum of a+b+c is: "<<a+b+c<<endl;

    // cout<<"the global c is: "<<::c;

    // float f = 34.4;
    // long double e = 34.4;

    float f = 34.4f;
    long double e = 34.4l;

    // if we write 1.2 its a double if we write 1.2f its a float.
    // if we write 1.2 its a double if we write 1.2l its a long double.

    // cout<<"f: "<<f<<endl<<"e: "<<e<<endl;

    // cout<<"the size of 34.4 is: "<<sizeof(34.4)<<endl;
    // cout<<"the size of 34.4f is: "<<sizeof(34.4f)<<endl;
    // cout<<"the size of 34.4F is: "<<sizeof(34.4F)<<endl;
    // cout<<"the size of 34.4l is: "<<sizeof(34.4l)<<endl;
    // cout<<"the size of 34.4L is: "<<sizeof(34.4L)<<endl;


    /* Refrence Veriable */
    // float x = 455; 
    // float & y = x;
    // cout<<x<<endl;
    // cout<<y<<endl;

    /* Typecasting */
    float val = 45.4;
    cout<<val<<endl;
    cout<<(int)val<<endl;
    // cout<<int(val)<<endl;

    int a = 6;
    float b = 4.8;
    cout<<"exp: "<<a+b<<endl;
    cout<<"exp: "<<a+int(b)<<endl;



    return 0;
}