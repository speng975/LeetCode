class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int count = nums.size();
        
        if (count < 2) {
            return 0;
        }
        
        vector<int> tmp = nums;
        sort(tmp.begin(), tmp.end());
        
        int max = 0;
        int value = 0;
        for (int i = 1; i < count; i++) {
            value = tmp[i] - tmp[i-1];
            if (value > max) {
                max = value;
            }    
        }
        
        return max;
    }
};
