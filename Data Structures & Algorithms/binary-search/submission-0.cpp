class Solution {
public:
    int search(vector<int>& nums, int target) {

        int mid = 0;

        int low = 0;
        int high = nums.size() - 1;

        mid = low + (high - low) / 2;

        while (low <= high) {
            if (nums[mid] == target) {
                return mid;
            }
            
            if (target > nums[mid]) {
                low = mid + 1;
                mid = low + (high - low) / 2;
            }

            if (target < nums[mid]) {
                high = mid - 1;
                mid = low + (high - low) / 2;
            }

        }



        return -1;
        
    }
};
