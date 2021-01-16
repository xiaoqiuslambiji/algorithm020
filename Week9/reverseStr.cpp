//
// Created by q on 2021/1/16.
//
#include <string>
#include <iostream>

using namespace std;

class Solution {
 public:
  void reverse(string& s, int start, int end) {
    for (int i = start, j = end; i < j; i++, j--) {
      int tmp = s[i];
      s[i] = s[j];
      s[j] = tmp;
    }
  }
  string reverseStr(string s, int k) {
    for (int i = 0; i < s.size(); i += (2 * k)) {
      // 1. 每隔 2k 个字符的前 k 个字符进行反转
      // 2. 剩余字符小于 2k 但大于或等于 k 个，则反转前 k 个字符
      if (i + k <= s.size()) {
        reverse(s, i, i + k - 1);
        continue;
      }
      // 3. 剩余字符少于 k 个，则将剩余字符全部反转。
      reverse(s, i, s.size() - 1);
    }
    return s;
  }
};

std::string s = "xiaoqiuslambiji";
int k = 2;
int main(){
  Solution solution;
  cout << solution.reverseStr(s, k) << endl;
  return 0;
}