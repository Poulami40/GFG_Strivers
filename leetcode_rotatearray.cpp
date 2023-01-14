class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int temp[100];
        int c=k%nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+c);
        reverse(nums.begin()+c,nums.end());

    }
};
