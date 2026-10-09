#include<iostream>
#include <string>

using namespace std;

int main() {
	int x = 2;
	int y = 1;

	int n = 10;

	int sum = 0;

	while ( y < n) {
		if ( y%x != 0) {
			sum = sum + y;
		} else {
			sum = sum - y;
		}
		y++;
	}
	cout << sum;

	return 0;
}





// #include<iostream>
// #include <string>

// using namespace std;

// int main()
// {

//     string txt = "this is a text";
//     int len = txt.size();
//     cout <<"The length of the string is: " << len<<endl;

//     return 0;
// }





// #include<iostream>
// #include<string>

// using namespace std;

// int main()
// {


//     int x,y,z;

//     cout<<"Write The First Number: ";
//     cin >> x;

//     cout<<"Write The Second Number: ";
//     cin >> y;

//     cout<<"Write The Third Number: ";
//     cin >> z;

//     if(x>y && x>z){
//         cout<<"Largest Number is: "<<x;
//     }
//     else if(y>x && y>z){
//         cout<<"Largest Number is: "<<y;
//     }
//     else if(z>x && z>y){
//         cout<<"Largest Number is: "<<z;
//     }

//     return 0;
// }







// #include<iostream>
// #include<string>

// using namespace std;

// int main()
// {

//     int x ;
//     string converson;
//     double degree;

//     cout<<"Write temperature in degree: ";
//     cin >>x;

//     cout<<endl<<"(C) to convert Farenheit to Celcius"<<endl<<"(F) to convert Celcius to Farenheit"<<endl<<": ";
//     cin >>converson;

//     if (converson=="c"){
//         degree = (x - 32.0) * 5.0 / 9.0;
//         cout<<degree<<endl;
//     }else if(converson=="f"){
//         degree = (x * 9.0) / 5.0 + 32;
//         cout<<degree<<endl;
//     }else{
//         cout<<"Wrong Input...";
//     }

//     return 0;
// }