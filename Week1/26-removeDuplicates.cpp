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
  // nums ��һ������ 100 ������������
  std::vector<int> nums;
  nums.reserve(200);
  int num_tmp;
  // ��ʼ������Ԫ��
  cout << "�������������� [1,1,2] \n";
  for ( int i = 0; i < 3; i++ ){
    cin >> num_tmp;
    nums.push_back(num_tmp);
  }
  int j = Solution::removeDuplicates(nums);
  // ���������ÿ��Ԫ�ص�ֵ
  cout << "�������������: \n";
  for (int k = 0; k < j; k++ ){
    cout << nums[ k ] << ",";
  }
  return 0;
};