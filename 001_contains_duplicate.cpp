// problem link - https://leetcode.com/problems/contains-duplicate/description/

bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>h;
        for(int i=0;i<nums.size();i++){
            h.insert(nums[i]);
        }
        if(h.size() == nums.size() ) return false;
        else return true;
}