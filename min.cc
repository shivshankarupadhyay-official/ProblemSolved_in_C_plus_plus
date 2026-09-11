#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec;

    int n;
    cout<<"ENTER THE SIZE OF VECTOR: ";
    cin>>n;

    cout<<"ENTER "<<n<<" ELEMENTS: ";
    for(int i = 0;i<n; i++){
        int x;
        cin>>x;
        vec.push_back(x);
    }
    int minimum = vec[0];

    for(int x:vec){
        
        if(x < minimum){
            minimum = x;
        }
    }
    cout<<" MINIMUM ELEMENT : "<< minimum<<endl;
    return 0;
}