class Solution {
public:

    void solve(vector<int>&c , int t ,vector<int>&cur , vector<vector<int>>&res , int idx){

        //base case -1
        if(t == 0){
            res.push_back(cur);
            return ;
        }

        if(idx == c.size() || t < 0){
            return ;
        }


        cur.push_back(c[idx]);
        solve(c,t-c[idx] ,cur,res,idx+1);

        cur.pop_back();


        while(idx+1 < c.size() && c[idx] == c[idx+1]){
            idx++ ;
        }

        solve(c,t,cur ,res,idx+1);
    }
    vector<vector<int>> combinationSum2(vector<int>& c, int t) {
        sort(c.begin(),c.end());
        vector<int>cur ;
        vector<vector<int>>res ;

        solve(c,t,cur,res,0);
        return res ;
    }
};