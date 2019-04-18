/*
* 1.申请一个和nums一样的临时数组tmp；
* 2.对数组tmp进行排序，找到中间位置；
* 3.遍历数组nums，奇数位填入中间数，偶数位填入末尾数，指针向左移动
*/
class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int count = nums.size();
        
        vector<int> tmp = nums;
        sort(tmp.begin(), tmp.end());
        
        int end = count - 1;
        int mid = end/2;
        
        for (int i = 0; i < count; i++) {
            if (i & 1) {
                nums[i] = tmp[end--];
            } else {
                nums[i] = tmp[mid--];
            }
        }
        return;
    }    
};
