#include<iostream>
using namespace std;
int main(){
    int b;
    cout<<"ENTER THE NUMBER: ";
    cin>>b;
    int original = b;
    int sum = 0;

    while(n>0){
        int digit = n%!0;
        //  factorial using loop
        int fact = 1;
        for(int i = 1;i<=digit; i++){
            fact *= i;
        }
        sum +=fact;
        n = n/10;
    }
    if(sum == original){
        cout<<"STRONG NUMBER: ";

    }else{
        cout<<"NOT STRONG NUMBER: ";
    }
    return 0;
}