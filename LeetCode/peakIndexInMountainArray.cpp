//  https://leetcode.com/problems/peak-index-in-a-mountain-array/

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int t=max_element(arr.begin(),arr.end())-arr.begin();
        return t;
            
    }
};
