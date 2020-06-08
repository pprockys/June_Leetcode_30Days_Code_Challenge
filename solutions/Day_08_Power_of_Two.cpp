//pprockys
class Solution {
public:
    bool isPowerOfTwo(int n) {
        while(n>1){if(n%2)break;n/=2;}
        if(n==1)return true;
        return false;
    }
};
