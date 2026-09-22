#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"ENTER THE NUMBER : ";
    cin>>num;
    if (num >= -9 && num<=9)
    {
        cout<<"SINGLE DIGIT";
    }else if((num >= 10 && num <= 99) || (num <= -10 && num >= -99)){
        cout<<"DOUBLE DIGIT";
    }
    else{
        cout<<"multi DIgit";
    }
    return 0;
}