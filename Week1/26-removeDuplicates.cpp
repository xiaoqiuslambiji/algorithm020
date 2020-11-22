//
// Created by q on 2020/11/22.
//
#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  static int removeDuplicates(vector<int>& nums) {
    if(nums.empty())
      return 0;

    int i = 0;
    for(int j = 1;j<nums.size();j++){
      if(nums[i]!=nums[j]){
        i++;
        nums[i]=nums[j];
      }
    }
    return i+1;
  }
};

int main(){
  // nums 是一个包含 100 个整数的数组
  std::vector<int> nums;
  nums.reserve(200);
  int num_tmp;
  // 初始化数组元素
  cout << "请依次输入数字 [1,1,2] \n";
  for ( int i = 0; i < 3; i++ ){
    cin >> num_tmp;
    nums.push_back(num_tmp);
  }
  int j = Solution::removeDuplicates(nums);
  // 输出数组中每个元素的值
  cout << "你输入的数字是: \n";
  for (int k = 0; k < j; k++ ){
    cout << nums[ k ] << ",";
  }
  return 0;
};