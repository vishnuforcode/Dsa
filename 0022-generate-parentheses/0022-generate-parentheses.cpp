class Solution {
public:

    void solve(int n , int op ,int cl ,string cur ,vector<string>&res){

        if(cur.size() == 2*n) {
            res.push_back(cur);
            return ;
        }

        if(op < n){
            solve(n , op+1 ,cl , cur+'(' , res);
        }
        if(cl < op){
            solve(n , op ,cl+1 , cur+')' , res);

        }

    }
    vector<string> generateParenthesis(int n) {
        vector<string>res ;
        solve(n , 0 , 0 , "" , res);

        return res ;
    }
};