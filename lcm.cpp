#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout << "ENTER TWO NUMBERS: ";
    cin >> a >> b;

    int hcf = 1;

    // Find HCF
    for(int i = 1; i <= min(a, b); i++){
        if(a % i == 0 && b % i == 0){
            hcf = i;
        }
    }

    int lcm = (a * b) / hcf;

    cout << "LCM = " << lcm;

    return 0;
}