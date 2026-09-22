class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin() , g.end());
        sort(s.begin() , s.end());

        int greed_ptr = 0 ;
        int cookie_ptr = 0 ;

        while(greed_ptr < g.size() && cookie_ptr < s.size() ){
            if(s[cookie_ptr] >= g[greed_ptr]){
                greed_ptr++;
            }

            cookie_ptr++ ;
        }

        return greed_ptr;
    }
};