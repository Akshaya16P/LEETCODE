#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int res = 0;
        int minDiff = INT_MAX;

        for (int i = 0; i < n - 2; i++) {
            int l = i + 1, r = n - 1;
            while (l < r) {
                int currSum = nums[i] + nums[l] + nums[r];
                int currDiff = abs(currSum - target);

                if (currDiff < minDiff || (currDiff == minDiff && currSum > res)) {
                    minDiff = currDiff;
                    res = currSum;
                }

                if (currSum > target) r--;
                else l++;
            }
        }
        return res;
    }
};