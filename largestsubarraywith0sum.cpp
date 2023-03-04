class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        int maxi=0,sum=0;
        // Your code here
        map<int,int> mp;
        for(int i=0;i<A.size();i++)
        {
            sum+=A[i];
            if(sum==0)
            {
                maxi=i+1;
            }
            else if(mp.find(sum)!=mp.end())
            {
                maxi=max(maxi,i-mp[sum]);
                
            }
            else
            {
                mp[sum]=i;
            }
        }
        return maxi;
    }
};
