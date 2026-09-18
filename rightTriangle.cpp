#include<iostream>
using namespace std;

int main() {
    int n;

    cout << "ENTER THE NUMBER: ";
    cin >> n;

    for(int i = 0; i < n; i++) {

        // Print spaces
        for(int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // Print stars
        for(int k = 0; k <= i; k++) {
            cout << "*";
        }

        // Move to next line
        cout << endl;
    }
}