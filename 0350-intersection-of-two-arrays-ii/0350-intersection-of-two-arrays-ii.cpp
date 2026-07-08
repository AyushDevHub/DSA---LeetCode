class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int left = 0, right = 0;
        int m = nums1.size() - 1;
        int n = nums2.size() - 1;
        vector<int> result;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        while (left <= m && right <= n) {
            if (nums1[left] < nums2[right]) {
                left++;
            } else if (nums1[left] > nums2[right]) {
                right++;
            } else {
                result.push_back(nums1[left]);
                left++;
                right++;
            }
        }
        return result;
    }
};
