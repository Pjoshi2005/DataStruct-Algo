class Solution {
   public:
    bool canWePlace(vector<int> &nums, int distance, int k) {
        int cowsPlaced = 1;
        int n = nums.size();
        int last = nums[0];
        for (int i = 1; i < n; i++) {
            if (nums[i] - last >= distance) {
                cowsPlaced++;
                last = nums[i];
            }
            if (cowsPlaced >= k) return true;
        }
        return false;
    }
public : 
    int aggressiveCows(vector<int> &nums, int k) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int high = nums[n-1] - nums[0];
    int low = 0;
    int ans = 0;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (canWePlace(nums, mid, k) == true) {
            ans = mid;
            low = mid + 1;
        } else
            high = mid - 1;
    }
    return high;
}
};
