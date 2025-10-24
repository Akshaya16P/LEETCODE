class Solution {
public:
    int binary(vector<int> vec, bool k, int tar) {
        int left = 0, right = vec.size() - 1;
        int ans = -1;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (!k) {
                if (vec[mid] <= tar) {
                    if (vec[mid] == tar)
                        ans = mid;
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            } else {
                if (vec[mid] >= tar) {
                    if (vec[mid] == tar)
                        ans = mid;
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        if (nums.size() == 0)
            return {-1, -1};

        int x = binary(nums, true, target);
        int y = binary(nums, false, target);

        return {x, y};
    }
};