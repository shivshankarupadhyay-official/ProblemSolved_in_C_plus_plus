#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"ENTER THE VALUE OF a: ";
    cin>>a;
    cout<<"ENTER THE VALUE OF b: ";
    cin>>b;
    for(int i = a; i<=b; i++){
        if(i%7==0){
            cout<<i<<endl;
        }

    }return 0;
    
}