class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        int n=nums.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            if (!ans.empty() && ans[0] == nums[i]) continue;
            if (ans.size() == 2 && ans[1] == nums[i]) continue;

            int cnt=0;
            for(int j=0;j<n;j++){
                if(nums[j]==nums[i]){
                    cnt++;
                }
            }
            if(cnt>n/3){
                ans.push_back(nums[i]);
                
            }
        }
        return ans;
    }
};