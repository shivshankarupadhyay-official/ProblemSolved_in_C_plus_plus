#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "ENTER THE NUMBER: ";
    cin >> n;

    int sum = 0;  // This variable will store the sum of proper divisors

    // Loop from 1 to n-1 to find all proper divisors
    for(int i = 1; i < n; i++){
        
        // Check if 'i' divides 'n' completely
        if(n % i == 0){
            sum += i;  // Add the divisor to the sum
        }
    }

    // Check if the sum of divisors is equal to the original number
    if(sum == n){
        cout << "PERFECT";  // The number is a perfect number
    }
    else{
        cout << "NOT PERFECT";  // The number is not a perfect number
    }

    return 0;  // End of program
}