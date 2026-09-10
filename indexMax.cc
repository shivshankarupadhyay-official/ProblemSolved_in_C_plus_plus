#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER THE SIZE: ";
    cin>>n;

    int arr[n];
    cout<<"ENTER THE ELEMENTS : ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];

    }int max = arr[0];
    int index = 0;
    for(int i = 1; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
            index = i;
        }

    }cout<<"THE INDEX OF MAX NUMBER IN ARRAY IS : "<<index;
}