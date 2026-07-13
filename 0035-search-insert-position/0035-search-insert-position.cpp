class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int s=0,e=n-1;
        while(s <= e){
            int mid=(s+e)/2;
            if(target==nums[mid]){
                return mid;
            }else if(target<nums[mid]){
                e=mid-1;
            }else{
                s=mid+1;
            }
        }
        return e+1;
    }
};