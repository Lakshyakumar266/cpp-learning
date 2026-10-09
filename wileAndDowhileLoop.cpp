#include <iostream>

using namespace std;

int main()
{
    // for loop
    // for (int i = 0; i <= 4; i++)
    // {
    //     cout<<i<<endl;
    // }

    // While Loop
    // int i = 0;
    // while (i <= 10)
    // {
    //     cout << i << endl;
    //     i++;
    // }

    // Do While Loop
    // int i = 0;
    // do
    // {
    //     cout<<i<<endl;
    //     i++;
    // } while (i<=10);
    
    /* Table 1 to 60 */
    int i = 1;
    while (i<=60)
    {
        int j = 1;
        while(j<=10)
        {
            cout<<i<<" X "<<j<<" = "<<i*j<<endl;
            j++;
        }
        cout<<" "<<endl;
        i++;
    }

    return 0;
}