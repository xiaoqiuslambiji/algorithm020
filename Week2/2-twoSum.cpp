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
      // find(key)������ key Ϊ���ļ�ֵ�ԣ�����ҵ����򷵻�һ��ָ��ü�ֵ�Ե������������
      // ��֮���򷵻�һ��ָ�����������һ����ֵ��֮��λ�õĵ���������� end() �������صĵ�������
      if (it != hashtable.end()) {
        cout << "it->second: " << it->second << " i:" << i << endl;
        return {it->second, i};
        // ȡ�ü���ֵ��
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
  //������ nums = [2, 7, 11, 15], target = 9
  //����Ϊ nums[0] + nums[1] = 2 + 7 = 9
  //�����Է��� [0, 1]
  std::vector<int> nums{2, 7, 11, 15};
  std::vector<int> return_nums;
  int target = 9;
  return_nums = Solution::twoSum(nums, target);
  for (int i=0; i < return_nums.size(); i++) {
    std::cout << return_nums[i] << " ";
  }

  return 0;
}