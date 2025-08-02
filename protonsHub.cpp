#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;

    cout << "Enter number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = 0;

    // Traverse even positions: i = 0, 2, 4, ...
    for (int i = 0; i < n; i += 2) {
        if(isPrime(arr[i])) {
            sum += arr[i];
        }
    }

    cout << "Sum of prime numbers at even positions: " << sum << endl;

    return 0;
}
