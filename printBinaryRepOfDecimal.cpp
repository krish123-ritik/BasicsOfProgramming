// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int num;
//     cout << "Enter a decimal number: ";
//     cin >> num;

//     vector<int> binary;

//     if(num == 0) {
//         cout << "0" << endl;
//         return 0;
//     }

//     while(num > 0) {
//         int rem = num % 2;         // Get remainder
//         binary.push_back(rem);     // Store it
//         num = num / 2;             // Reduce the number
//     }

//     // Print in reverse (MSB to LSB)
//     cout << "Binary: ";
//     for(int i = binary.size() - 1; i >= 0; i--) {
//         cout << binary[i];
//     }

//     cout << endl;
//     return 0;
// }


#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;

    vector<int> binary;
    if(n == 0)
    {
        return 0;
    }

    while(n > 0)
    {
        int rem = n%2;
        binary.push_back(rem);
        n = n/2;
    }

    //print in reverse
    cout<<"Binary Represenation is: "<<endl;
    for(int i = binary.size()-1; i >= 0; i--)
    {
        cout<<binary[i];
    }
    cout<<endl;

    return 0;
}