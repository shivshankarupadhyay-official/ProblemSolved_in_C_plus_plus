#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"ENTER THE FIRST SIDE VALUE: ";
    cin>>x;
    cout<<"ENTER THE SECOND SIDE VALUE: ";
    cin>>y;
    cout<<"ENTER THE THIRD SIDE VALUE: ";
    cin>>z;
    if (x*x + y*y == z ||
    x*x + z*z == y*y || 
    y*y + z*z == x*x)
    {
        cout<<"THE FOLLOWING INPUTS FOLLOWS PYTHAGOREAN TRIPLET";  
    }else{
        cout<<"HE FOLLOWING INPUTS DO NOT FOLLOWS PYTHAGOREAN TRIPLET";
    }
    return 0;
    

}