#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER THE SIZE: ";
    cin>>n;
    int plscount= 0;
    int minuscount = 0;

    int zerocount = 0;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];

    }
    for( int i = 0 ; i<n; i++){
        if(arr[i]>0){
            plscount++;

        }if(arr[i]<0){
            minuscount++;

        }if(arr[i] == 0){
            zerocount++;
        }
    }cout<<"POSITiVE INTEGER ARE: "<<plscount<<endl;
    cout<<"NEGATIVE INTEGER ARE: "<<minuscount<<endl;
    cout<<"ZERO INTEGER ARE: "<<zerocount<<endl;
    
}