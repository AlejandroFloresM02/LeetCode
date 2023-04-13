#include <iostream>
#include <vector>
#include <algorithm>
std::vector<int> sortedSquares(std::vector<int>& nums) {
        size_t n = nums.size();
        std::vector<int> ans(n);
        for (size_t i = 0; i < n; i++) {
            ans[i] = nums[i] * nums[i];
        }

        sort(ans.begin(), ans.end());
        return ans;
}
    


int main(){
    std::vector<int> nums = {-7,-3,2,3,11};
    sortedSquares(nums);

}