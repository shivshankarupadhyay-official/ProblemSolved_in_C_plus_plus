#include<iostream>
using namespace std;
int main(){
    int v;
    cout<<"ENTER THE NUMBER: ";
    cin>>v;
    int sum = 0;
    while (v>0)
    {
        int digit = v%10;
        sum+=digit;
        v = v/10;

    }
    cout<<sum;
    
}