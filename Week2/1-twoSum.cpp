//
// Created by q on 2020/11/28.
//
#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  static vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    for (int i = 0; i < n; ++i) {
      for (int j = i + 1; j < n; ++j) {
        if (nums[i] + nums[j] == target) {
          return {i, j};
        }
      }
    }
    return {};
  }
};

int main(){
  //　给定 nums = [2, 7, 11, 15], target = 9
  //　因为 nums[0] + nums[1] = 2 + 7 = 9
  //　所以返回 [0, 1]
  std::vector<int> nums{2, 7, 11, 15};
  std::vector<int> return_nums;
  int target = 9;
  return_nums = Solution::twoSum(nums, target);
  for (int i=0; i < return_nums.size(); i++) {
    std::cout << return_nums[i] << " ";
  }

  return 0;
}