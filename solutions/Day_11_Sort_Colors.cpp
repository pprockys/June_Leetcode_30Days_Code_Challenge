//pprockys;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int a=0,b=0,c=0;
        for(auto i:nums)
            if(i==0)a++;
            else if(i==1)b++;
            else c++;
        int i=0;
        while(a--)
        nums[i++]=0;
        while(b--)
        nums[i++]=1;
        while(c--)
        nums[i++]=2;
    }
};
