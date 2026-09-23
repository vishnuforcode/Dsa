class Solution {
public:

    void solve(vector<int>&nums , vector<int>&cur , vector<vector<int>>&res ,int idx){

        if(idx == nums.size()){
            res.push_back(cur);
            return ;
        }

        cur.push_back(nums[idx]);
        solve(nums , cur ,res , idx+1);

        cur.pop_back();
        solve(nums , cur ,res , idx+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>res ;
        vector<int>cur ;

        solve(nums , cur ,res ,0);

        return res ;
    }
};