#include<iostream>

using namespace std;

int main()
{

    // Pointer --> datatype which holds address other datatypes.

    int a = 3;
    int* b = &a;
    // & --> Address of operator
    cout<<"add. of a = "<<&a<<endl;
    cout<<"add. of a = "<<b<<endl;

    // * --> Drefrence operator
    cout<<"value. of b = "<<*b<<endl;

// pointer to pnter
    int** c = &b;
    cout<<"add. of b = "<<&b<<endl;
    cout<<"add. of b = "<<c<<endl;

    cout<<"val. of a = "<<*c<<endl;
    cout<<"val. of a = "<<**c<<endl;
    
    return 0;
}