class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
           for(int j=1;j<nums.size();j++){
              if(nums[i]+nums[j]==target ) return {i,j};
           }
        }
        // if solution is not found then return an empty vector
        return {};
    }
}; 
