#include<iostream>
using namespace std;

int main(){
    int a, r, n;

    cout << "ENTER THE VALUE OF a: ";
    cin >> a;

    cout << "ENTER THE VALUE OF r: ";
    cin >> r;

    cout << "ENTER THE VALUE OF n: ";
    cin >> n;

    int term = a;

    for(int i = 0; i < n; i++){

        cout << term << " ";

        term = term * r;
    }

    return 0;
}