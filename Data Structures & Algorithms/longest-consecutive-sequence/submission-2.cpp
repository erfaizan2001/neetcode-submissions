class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;

        sort(nums.begin(), nums.end());

        vector<int> v;
        int count = 1;

        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i-1]){
                continue; // duplicate skip
            }
            else if(nums[i] == nums[i-1] + 1){
                count++;
            }
            else{
                v.push_back(count);
                count = 1;
            }
        }

        v.push_back(count); // last sequence

        sort(v.begin(), v.end());
        return v.back();
        
    }
};
