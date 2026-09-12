#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout << "ENTER TWO NUMBERS: ";
    cin >> a >> b;

    int hcf = 1;

    for(int i = 1; i <= min(a,b); i++){
        if(a % i == 0 && b % i == 0){
            hcf = i;
        }
    }

    cout << "HCF = " << hcf;

    return 0;
}