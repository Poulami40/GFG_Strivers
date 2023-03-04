class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long res=0;
        int c=0;
        int lastmin=-1,lastmax=-1,leftbound=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<=maxK&&nums[i]>=minK){
                lastmin=(nums[i]==minK)?i:lastmin;
                lastmax=(nums[i]==maxK)?i:lastmax;
                res+=max(0,min(lastmax,lastmin)-leftbound);
            }
            else
            {
                leftbound=i;
                lastmin=-1;
                lastmax=-1;
            }
        }
        return res;
    }
};
