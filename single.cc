#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int val: nums){
            ans = ans ^ val;
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << "The single number is: " << sol.singleNumber(nums) << endl;
    return 0;
}
