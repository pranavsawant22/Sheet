//Problem link : https://leetcode.com/problems/find-the-duplicate-number/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
     bitset <100001> b(0);
        for (auto i : nums) {
            if (b[i] == 0){
                b[i] = 1;
            } else {
                return i;
            }
        }
        return -1;
    }
};