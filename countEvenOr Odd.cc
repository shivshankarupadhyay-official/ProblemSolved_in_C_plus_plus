#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER THE SIZE: ";
    cin>>n;
    int oddCount = 0;
    int evCount = 0; 

    int arr[n];

    cout<<"ENTER THE ELEMENTS: ";

    for(int i = 0; i<n; i++){
        cin>>arr[i];

    }
    for(int i = 0; i<n; i++){
        if(arr[i]%2 == 0){
            evCount++;
        }if(arr[i] %2 == 1){
            oddCount++;
        }
        
    }cout<<"TOTAL EVEN NUMBERS ARE: "<<evCount<<endl;
    cout<<"TOTAL ODD NUMBERS ARE: "<<oddCount;

    return 0;
}