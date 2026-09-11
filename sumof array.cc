#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER THE size: ";
    cin>>n;
    int sum = 0;

    int arr[n];
    cout<<"ENTER THE NUMBERS: ";
    
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }for(int i = 0; i<n; i++){
        sum = sum + arr[i];

        
    }cout<<" THE SUM OF ARRAY IS : "<<sum;
    return 0;
}