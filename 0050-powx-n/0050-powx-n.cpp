class Solution {
public:
    double myPow(double x, long long n) {
        if(n == 0){
            return 1 ;
        }
        else if(n < 0){
            return 1.0 / myPow(x,-n);
        }

        double halfans = myPow(x,n/2);

        if(n % 2 == 0){
            return halfans*halfans ;
        }
        else{
            return x*halfans*halfans ;
            
        }

      return 0 ;
    }
};