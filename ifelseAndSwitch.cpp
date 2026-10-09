#include<iostream>

using namespace std;

int main()
{
    int age;
    cout<<"tell me your age: "<<endl;
    cin>>age;


    // if ((age<18) && (age<0) )
    // {
    //     cout<<"Youe can't Come."<<endl;
    // }
    // else if(age>=0)
    // {   
    //     cout<<"Youe are Not Yet born."<<endl;
    // }
    // else if(age==18)
    // {
    //     cout<<"You can Get A Kid pass."<<endl;
    // }else{
    //     cout<<"You Can Come."<<endl;
    // }


    switch (age)
    {
    case 18:
        cout<<"you are 18."<<endl;
        break;
    case 20:
        cout<<"you are 20."<<endl;
        break;
    case 24:
        cout<<"you are 24."<<endl;
        break;
    default:
        cout<<"No Case mached."<<endl;
        break;
    }

    cout<<"done Printing"<<endl;
    
    return 0;
}