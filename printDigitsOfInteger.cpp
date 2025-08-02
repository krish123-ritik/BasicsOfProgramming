// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     vector<int> digits; // Step 1: Store digits

//     // Step 2: Extract digits from right to left
//     while(num > 0) {
//         int digit = num % 10;
//         digits.push_back(digit);
//         num = num / 10;
//     }

//     // Step 3: Print digits in reverse (left to right)
//     for(int i = digits.size() - 1; i >= 0; i--) {
//         cout << digits[i] << endl;
//     }

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

    vector<int> digits;

    while(n > 0)
    {
        int digit = n%10;
        digits.push_back(digit);
        n = n/10;
    }
     
    //for printing digits
    for(int i =  digits.size() - 1; i >= 0; i--)
    {
        cout<<digits[i]<<endl;
    }
    
    //for reverse
    for(int i=0; i<digits.size(); i++)
    {
        cout<<digits[i];
    }

    return 0;
}