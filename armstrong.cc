#include<iostream>
using namespace std;

int main() {
    int n, original, remainder, result = 0, digits = 0;

    cout << "Enter a number: ";
    cin >> n;

    original = n;

    // Count digits
    while (n != 0) {
        n /= 10;
        digits++;
    }

    n = original;

    // Armstrong check
    while (n != 0) {
        remainder = n % 10;
        
        int power = 1;
        for(int i = 0; i < digits; i++) {
            power *= remainder;
        }

        result += power;
        n /= 10;
    }

    // Result
    if(result == original)
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong Number";

    return 0;
}