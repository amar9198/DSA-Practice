class Solution {
public:

    int lowerBound(vector<int> &nums, int x){
        int n=nums.size();
        int s=0,e=n-1;
        int ans=n;
        while(s <= e){
            int mid=(s+e)/2;
            if(nums[mid]>=x){
                ans=mid;
                e=mid-1;
            }else{
                s=mid+1;
            }
        }
        return ans;  
    }

	int upperBound(vector<int> &nums, int x){
        int n=nums.size();
        int s=0,e=n-1;
        int ans=n;
        while(s <= e){
            int mid=(s+e)/2;
            if(nums[mid]>x){
                ans=mid;
                e=mid-1;
            }else{
                s=mid+1;
            }
        }
        return ans;  
    }


    vector<int> searchRange(vector<int>& nums, int target) {
         int n=nums.size();
       	int lb=lowerBound(nums,target);
	if(lb==n||nums[lb]!=target) return {-1,-1};
	int ub=upperBound(nums,target);
	return {lb,ub-1};
    }
};