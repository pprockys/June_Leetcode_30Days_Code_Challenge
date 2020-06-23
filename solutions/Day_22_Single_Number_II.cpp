//pprockys;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<32;i++)
        {
            int sum=0;
            int x=(1<<i);
            for(auto j:nums)
            {
                if((x&j)!=0)sum++;
            }
            if(sum%3!=0)
                ans+=x;
        }
        return ans;
    }
};
