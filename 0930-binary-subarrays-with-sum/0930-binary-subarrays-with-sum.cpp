class Solution {
public:

        int atSum(vector<int>&nums , int goal){
            if(goal < 0) return 0 ;
        int count =0;
        int l =0;
        int cursum =0;

        for(int r=0;r< nums.size();r++){

            cursum+=nums[r] ;

            while(cursum > goal){
                cursum-= nums[l] ;
                l++ ;
            }

           count += r-l+1 ;

        }
            return count ;
     }


    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atSum(nums , goal) - atSum(nums ,goal-1) ;

    }
};