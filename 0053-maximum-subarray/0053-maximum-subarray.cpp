class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long sum=0,maxi=LONG_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            // if(sum==0){
            //     start=i;
            // }
            sum+=nums[i];
            if(sum>maxi){
                maxi=sum;
               // ans start=start, ans end=i;
            }
            if(sum<0){
                sum=0;
            }
        }
        return maxi;
        
    }
};