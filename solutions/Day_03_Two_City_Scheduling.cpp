//pprockys;
class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int ans=0;
        for(int i=0;i<costs.size();i++)
        {
            ans+=costs[i][0];
            costs[i][0]=costs[i][1]-costs[i][0];
        }
        sort(costs.begin(),costs.end());
        for(int i=0;i<costs.size()/2;i++)
        {
            ans+=costs[i][0];
        }
        return ans;
    }
};
