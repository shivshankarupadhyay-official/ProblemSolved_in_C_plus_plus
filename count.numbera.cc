#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"ENTER THE NUMBER: ";
    cin>>n;

    int count = 0;

    while(n > 0){
        count++;        // increase count
        n = n / 10;     // remove last digit
    }

    cout << "Number of digits = " << count;

    return 0;
}