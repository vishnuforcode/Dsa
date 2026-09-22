class Solution {
public:

    bool solve(string&s , int st , int end){
        if(st >= end){
            return true ;
        }

        if(!isalnum(s[st])){    
        return solve(s ,st+1 , end) ;
            
        }
        else if(!isalnum(s[end])) {
        return solve(s ,st, end-1) ;

        }

        if(tolower(s[st]) != tolower(s[end])){
            return false ;
        }

        return solve(s ,st+1 , end-1) ;
    }
    bool isPalindrome(string s) {
        return solve(s , 0 ,s.size()-1) ;
    }
};