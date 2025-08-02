#include <iostream>
using namespace std;

int main() {
    int n, rem, ans = 0;

    cout << "Enter an integer: ";
    cin >> n;

    int original = n;  // store original number for display

    while (n > 0) 
    {
        rem = n % 10;         // last digit
        ans = ans * 10 + rem; // append to answer
        n = n / 10;           // remove last digit
    }

    cout << "Reversed number of " << original << " is: " << ans << endl;

    return 0;
}
