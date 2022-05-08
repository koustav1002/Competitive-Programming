//https://leetcode.com/problems/max-consecutive-ones/
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int mx=0,cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1) cnt++;
            else cnt=0;
            mx=max(cnt,mx);
        }
        return mx;
    }
};
