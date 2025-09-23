#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> sum; 
        for(int i=0; i<nums.size(); ++i){
            int offset = target - nums[i];

            if(sum.find(offset) != sum.end()){
                return {sum[offset], i};
            }else{
                    sum[nums[i]] = i;

            }
        }

        return{};
    }
};


int main(){
    vector<int> nums = {2,7,11,15};
    int target = 9;

    Solution sol;
    vector<int> result = sol.twoSum(nums, target);
    cout<<"target is at index: "<<result[0]<<", "<<result[1]<<endl;

}
