#include<iostream>
using namespace std;

void changeA(int &b){ //pass reference using  alies
    
    b= 20;


} 
int main(){

    int a = 10;
    changeA(a);

    cout<<"inside main function: "<<a<<endl;  //20

    return 0;

}