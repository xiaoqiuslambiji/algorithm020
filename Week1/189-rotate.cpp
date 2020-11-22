//
// Created by q on 2020/11/22.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  static void rotate(vector<int>& nums, int k) {
    int temp,pre;
    int length = nums.size();
    for(int i =0;i < k;i++){
      pre = nums[length - 1];
      for(int j = 0;j < length;j++){
        temp = nums[j];
        nums[j] = pre;
        pre = temp;
      }
    }
  }
};

int main(){
  std::vector<int> nums;
  nums.reserve(200);
  int num_tmp;
  cout << "请依次输入数字 [1,2,3,4,5,6,7] k \n";
  for ( int i = 0; i < 8; i++ ){
    cin >> num_tmp;
    nums.push_back(num_tmp);
  }
////  cout << "请输入一个数字 k = 3  \n";
////  cin >> k_tmp;
  int k_tmp = nums[nums.size()-1];
  nums.pop_back();
  Solution::rotate(nums, k_tmp);
  for (int k = 0; k < nums.size(); k++ ){
    cout << nums[ k ] << ",";
  }

  return 0;
};