#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"ENTER THE NUMBER: ";
    cin>>x;
    int reverse = 0;
    while (x>0)
    {
        int digit = x%10;
        reverse = reverse * 10 +digit;
        x = x/10;
    }
    cout<<"THE REVERSE OF THAT NUMBER IS: "<<reverse;
    
}