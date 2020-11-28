//
// Created by q on 2020/11/28.
//

#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
 public:
  static bool isAnagram( string s,  string t) {
    if (s.length() != t.length()) {
      return false;
    }
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    /**
     * sort������ģ��������������
       void sort (RandomAccessIterator first, RandomAccessIterator last, Compare comp);
      ��1����һ������first����Ҫ������������ʼ��ַ��
      ��2���ڶ�������last���ǽ����ĵ�ַ�����һ�����ݵĺ�һ�����ݵĵ�ַ��
      ��3������������comp������ķ����������Ǵ�����Ҳ���ǽ������������������д����Ĭ�ϵ����򷽷��Ǵ�С��������
      sort() �����ǻ��ڿ�������ʵ�ֵģ�
     */
    return s == t;
    // ����֮������ַ����Ƚ�,��������ַ�����ÿһ���ַ���Ȼ᷵�� true
  }
};

int main(){
  // ����: s = "anagram", t = "nagaram"
  // ���: true
  const string s = "anagram";
  const string t = "nagaram";
  if (Solution::isAnagram(s, t)){
    std::cout << "true" << endl;
  }
  else{
    std::cout << "false" << std::endl;
  }
  return 0;
}