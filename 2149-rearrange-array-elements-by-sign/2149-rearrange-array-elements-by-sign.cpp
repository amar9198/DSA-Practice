class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,0);
        int PosIndex=0,negIndex=1;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                ans[negIndex]=nums[i];
                negIndex +=2;
            }else{
                ans[PosIndex]=nums[i];
                PosIndex+=2;
            }
        }
        return ans;
    }
};