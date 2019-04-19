/* https://leetcode-cn.com/problems/sort-array-by-parity */
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int count = A.size();
        int left = 0;
        int right = count - 1;

        if (count == 1) {
            return A;
        }

        while (left < right) {
            if (A[left] % 2 == 0) {
                /* 偶数，右移*/
                left++;
                continue;
            }

            if (A[right] % 2 == 1) {
                /* 奇数，左移 */
                right--;
                continue;
            }

            int tmp = A[left];
            A[left] = A[right];
            A[right] = tmp;
        }

        return A;
    }
};
