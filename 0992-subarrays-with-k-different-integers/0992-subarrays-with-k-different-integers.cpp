class Solution {
public:

    int atMost(vector<int>&nums , int k){
        int res = 0 ;
        
        int l  =0 ;
        unordered_map<int ,int>map ;
        for(int r = 0 ; r<nums.size() ; r++){

            map[nums[r]]++ ;

            while(map.size()> k){
                map[nums[l]]-- ;

                if(map[nums[l]] == 0) map.erase(nums[l]) ;

                l++ ;
            }

            res += r-l+1 ;

        }

        return res ;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMost(nums , k) - atMost(nums , k-1);
    }
};