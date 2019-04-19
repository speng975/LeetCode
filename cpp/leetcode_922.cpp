class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        vector<int> ret = A;
        int count = A.size();
        int odd = 0;
        int even = 1;
        for (int i = 0; i < count; i++) {
            if(A[i] % 2 == 0) {
                ret[odd] = A[i];
                odd += 2;
            } else {
                ret[even] = A[i];
                even += 2;
            }
        }

        return ret;
    }
};

