#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"ENTER THE NUMBER: ";
    cin>>a;
    bool isPrime = true;
    if(a <=1){
        isPrime = false;
    }
    for(int i = 2; i < a; i++){
        if(a%i==0){
            isPrime = false;
            break;
        }
    }
    if(isPrime){
        cout<<"PRIME ";
    }else{
        cout<<"NOT PRIME";
    }
    return 0;
}