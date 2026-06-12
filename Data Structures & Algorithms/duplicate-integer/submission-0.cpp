
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       unordered_map<int, bool> num_map;

       for (int num : nums) {
        if (num_map.find(num) != num_map.end()) {
            return true;
        }
        num_map[num] = true;
       }
       return false;
    }
};