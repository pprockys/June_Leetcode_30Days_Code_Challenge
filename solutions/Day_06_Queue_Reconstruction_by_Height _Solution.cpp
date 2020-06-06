//pprockys;
class Solution {
public:
       vector<vector<int>> reconstructQueue(vector<vector<int>> &p) 
       {
            auto cmp =[] (const vector<int> &a, const vector<int> &b) 
            {
               return a[0]>b[0]||(a[0]==b[0]&&a[1]<b[1]);
            };
            sort(p.begin(),p.end(),cmp);
            vector<vector<int>>v;
            for(int i=0;i<p.size();i++) 
            {
                if(p[i][1]==v.size()) 
                v.push_back(p[i]);
                else 
                v.insert(v.begin()+p[i][1],p[i]);
             }
             return v;
        }
    
};
