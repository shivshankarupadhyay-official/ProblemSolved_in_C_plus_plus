#include<iostream>
using namespace std;

int main() {

    int n;

    cout << "ENTER THE NUMBER: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {

        // print same number i times
        for(int j = 1; j <= i; j++) {

            cout << i;
        }

        cout << endl;
    }

    return 0;
}