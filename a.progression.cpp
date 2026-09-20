#include<iostream>
using namespace std;
int main(){
    int a,d,n;
    cout<<"ENTER a VALUE: ";
    cin>>a;
    cout<<"ENTER d VALUE: ";
    cin>>d;
    cout<<"ENTER n VALUE: ";
    cin>>n;


    for(int i = 0; i<n; i++){
        cout<<a+ (i*d)<<" "; 

    }
    return 0;

}