#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER THE NUMBER: ";
    cin>>n;
    for(int i = 1; i<=n; i++){ // print numbers from 1 to i
        for(int j = 1; j<=i; j++){
            cout<<j;
        }
     cout<<endl; // move to the next line after each row
    }

    return 0;
}