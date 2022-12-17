// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

import java.util.HashMap;

class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> mapa = new HashMap<>();
        for (int x = 0; x < nums.length; x++) {
            if (!mapa.containsKey(nums[x]))
                mapa.put(target - nums[x], x);
            else {
                int[] arr = { mapa.get(nums[x]), x };
                return arr;
            }
        }
        return new int[0];
    }
}