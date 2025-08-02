// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     int digit;
//     int num = 0;

//     cout << "How many digits you want to enter? ";
//     cin >> n;

//     cout << "Enter " << n << " digits (one by one):\n";
//     for (int i = 0; i < n; i++) {
//         cin >> digit;
//         num = num * 10 + digit;
//     }

//     cout << "The final number is: " << num << endl;

//     return 0;
// }


#include<iostream>
using namespace std;
int main()
{
    int n;
    int digit;
    int num = 0;

    cout<<"Enter a number: "<<endl;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        cin>>digit;

        num = num * 10 + digit;
    }

    cout<<"Number is: "<<num<<endl;
    return 0;
}