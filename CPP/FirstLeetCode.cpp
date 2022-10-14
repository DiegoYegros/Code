/*Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
Return the running sum of nums.*/
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int numsSize = nums.size();
        int lastSum = 0;
    for (int x = 0; x<numsSize; x++){
        lastSum += nums[x];
        nums[x] = lastSum;
        }
    return nums;
    }
};