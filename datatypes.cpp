#include<iostream>

using namespace std;

int glo = 6;
void sum(){
    int a;
    cout<<"\n"<<glo;
}

int main(){
    // int a = 4;
    // int b = 6;
    int a=4, b=6;
    cout<< "Here the value of A is "<<a<<". \nthe value of B is "<<b; 

    float pi = 3.14;
    cout<< "\nvalue of float pi is "<<pi;

    char c = 'a';
    // char can use with only one character
    cout<< "\nthe value of C is "<<c;

    sum();

    int glo = 56;
    cout<<"\n"<<glo;

    // bool boolean = true;
    bool boolean = false;
    cout<<"\n"<<boolean;

    return 0;
}