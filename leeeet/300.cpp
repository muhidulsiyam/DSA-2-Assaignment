class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> list;
        for(int num : nums){
            auto a = lower_bound(list.begin(), list.end(), num);
            if (a == list.end()) list.push_back(num);
            else *a = num;
        }
        return list.size();
    }
};
