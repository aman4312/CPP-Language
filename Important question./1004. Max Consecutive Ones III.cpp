class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0,j=0;
        int ans=INT_MIN;
        int zero=0;
        while(j<nums.size())
        {
            if(nums[j]==0)zero++;
            while(zero>k)
            {
                 //ans=max(ans,j-i+1);
                if(nums[i]==0)zero--;
                i++;
            
            }
            ans=max(ans,j-i+1);
            j++;            
        }
        return  ans;
    }
};
