#include<iostream>
using namespace std;

int main(){
    int x;
    cout << "ENTER THE THREE DIGIT NUMBER: ";
    cin >> x;

    // First validate input
    if ((x >= 100 && x <= 999) || (x <= -100 && x >= -999)) {

        int first = x / 100;
        int middle = (x / 10) % 10;
        int last = x % 10;

        if (first + last == middle) {
            cout << "THE CONDITION IS MATCHED!";
        } else {
            cout << "THE CONDITION IS NOT MATCHED!";
        }

    } else {
        cout << "WRONG INPUT (NOT A 3-DIGIT NUMBER)";
    }

    return 0;
}