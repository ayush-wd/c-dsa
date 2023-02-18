class Solution {
public:
    bool isPowerOfTwo(int n) {
        float a = (float)n;
        while(a>=0) {
            if(a % 2 != 0) {
                return false;
            }
            else {
                a=a/2;
            }
        }
        return true;
    }
};