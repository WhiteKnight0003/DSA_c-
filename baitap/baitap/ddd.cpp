class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int> numtoindex;
        for(int i=0;i<nums.size(); ++i){
            if(const auto it = numtoindex.find(target - nums[i]);
            it != cend(numtoindex))
            return {it -> second , i};
            numtoindex[nums[i]] = i;
}
}