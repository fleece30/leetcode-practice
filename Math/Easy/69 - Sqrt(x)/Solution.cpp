class Solution {
public:
    int mySqrt(int x) {
        int low = 1, high = x;
        long int mid;
        int res = 0;
        while(low<=high) {
            mid = low+(high-low)/2;
            if(mid*mid <= x) {
                low = mid+1;
                res = mid;
            } else {
                high = mid-1;
            }
        }
        return res;
    }
};