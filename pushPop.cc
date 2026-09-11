// push back means entering number in vector

// #include<vector>
// using namespace std;

// int main(){
//     vector<int>vec;

//     cout<<" size = "<<vec.size()<<endl;

//     vec.push_back(35);
//     vec.push_back(25);
//     vec.push_back(15);

//     cout<<"After push back size  = " <<vec.size()<<endl;

//     for(int val: vec){
//         cout<<val<<endl;
//     }
//     return 0;
// }

//removing last elements in vector!

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec;

    cout<<" size = "<<vec.size()<<endl;

    vec.push_back(35);
    vec.push_back(25);
    vec.push_back(15);

    cout<<"After push back size  = " <<vec.size()<<endl;

    vec.pop_back();//15

    cout<<"first value in the vector: "<<vec.front()<<endl;//for printing first value in the vector!
    cout<<"last value in the vector: "<<vec.back()<<endl;// print last value
    cout<<"index value in the vector: "<<vec.at(0)<<endl;//print index value

    // for(int val: vec){
    //     cout<<val<<endl;
    // }
    return 0;
}

