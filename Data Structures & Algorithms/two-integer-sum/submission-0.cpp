class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> sums;
        vector<int> temp;

        for (int i = 0; i < nums.size(); i++) {

            //checking if a sum is possible with the numbers in the array
            
            int req = target - nums[i];


            if (sums.find(req) != sums.end()) {
                temp.push_back(sums.find(req)->second);
                temp.push_back(i);
                return temp;
            }

            //store the index for the current number

            else {
                sums[nums[i]] = i;
            }
        }
        return temp;

    }

};