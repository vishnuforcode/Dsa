class Solution {
public:


    void solve(vector<char>&s , int st , int end){
        if(st >= end){
            return ;

        }

        swap(s[st],s[end]);

        solve(s,st+1 ,end-1);
    }
    void reverseString(vector<char>& s) {
        solve(s,0,s.size()-1) ;
        
    }
};