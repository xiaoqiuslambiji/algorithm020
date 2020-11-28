//
// Created by q on 2020/11/28.
//
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
 public:
  static vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> hashtable;
    for (int i = 0; i < nums.size(); ++i) {
      auto it = hashtable.find(target - nums[i]);
      // find(key)查找以 key 为键的键值对，如果找到，则返回一个指向该键值对的正向迭代器；
      // 反之，则返回一个指向容器中最后一个键值对之后位置的迭代器（如果 end() 方法返回的迭代器）
      if (it != hashtable.end()) {
        cout << "it->second: " << it->second << " i:" << i << endl;
        return {it->second, i};
        // 取得键和值：
        // unordered_map<Key,T>::iterator it;
        // it->first;               // same as (*it).first   (the key value)
        // it->second;              // same as (*it).second  (the mapped value)
      }
      hashtable[nums[i]] = i;
      std::cout << "nums[i]: " << nums[i] << " i: " << i <<  endl;
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