
class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        int n=size/2;
        int max=-1;
        map <int,int> mp;
        for(int i=0;i<size;i++)
        {
            mp[a[i]]++;
            if(mp[a[i]]>max&&mp[a[i]]>n)
            {
                // for (auto itr :mp) {
                //     auto s=mp->second
                // if(s!=mp[a[i]])
                max=a[i];
                // }
            }
        }
        // your code here
        return max;
    }
};

//O(n log n)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0,candidate=0;
        for(int i:nums)
        {
            if(count==0)
                candidate=i;
            if(i==candidate)
                count++;
            else
                count--;
        }
        return candidate;
        
    }
};
