#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER THE NUMBER: ";
    cin>>n;
    int a = 0;
    int b = 1;
    int next;
    int sum = 0;
    for(int i = 1; i<=n; i++){
        cout<<a;
        sum+=a;
        next = a+b;
        a = b;
        b = next;
        

    }
    cout<<"\n THE NTH SUM OF FIBANCCI SERIES IS:  "<<sum;

}