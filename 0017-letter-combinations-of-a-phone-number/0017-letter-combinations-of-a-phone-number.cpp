class Solution {
public:
     unordered_map<char ,string>key = {
   {'2',"abc"},
   {'3',"def"},
    {'4',"ghi"},
    {'5',"jkl"},
   {'6',"mno"},
    {'7' ,"pqrs"},
   {'8',"tuv"},
   {'9',"wxyz"}
    } ;

    void solve(string digit , string& cur , vector<string>&res , int idx , unordered_map<char ,string>key){

        if(idx == digit.size()){
            res.push_back(cur);
            return ;
        }

        string letters = key[digit[idx]] ;

        for(char l : letters){

            cur+= l ;

            solve(digit , cur ,res,idx+1 ,key) ;
             cur.pop_back();
        }

    }
    vector<string> letterCombinations(string digits) {
        vector<string>res ;
        string cur = "";

        if(digits.size() == 0){
            return res ;
        }

        solve(digits , cur ,res ,0 ,key);
        return res ;
    }
};