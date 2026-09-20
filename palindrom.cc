#include<iostream>
using namespace std;
int main(){
    int c;
    cout<<"ENTER THE NUMBER: ";
    cin>>c;
    int reverse = 0;
    int original = c;

    while (c>0)
    {
        int digit = c%10;
        reverse = reverse* 10 + digit;
        c = c/10;
    }
    if (original == reverse)
    {
        cout<<"THE NUMBER IS PALINDROM";
    }
    else{
        cout<<"NOT PALINDROME";
    }
    return 0;
    
    
}