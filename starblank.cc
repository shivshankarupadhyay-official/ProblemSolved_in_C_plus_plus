#include<iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter the number: ";
    cin >> n;

    for(int i = 0; i < n; i++) {

        // Print leading spaces
        for(int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // Print stars and spaces alternately
        for(int j = 0; j <= i; j++) {

            if(j % 2 == 0) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}

