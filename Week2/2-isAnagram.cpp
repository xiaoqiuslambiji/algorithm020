//
// Created by q on 2020/11/28.
//

#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
 public:
  static bool isAnagram(string s, string t) {
    if (s.length() != t.length()) {
      return false;
    }
    vector<int> table(26, 0);
    for (auto& ch: s) {
      cout << "ch - 'a': " << ch - 'a' <<  endl ;
      // A的ASCII码是65,a的ASCII码是97
      table[ch - 'a']++;
      // vector的下标是ch - 'a'的值, 初始值是零
    }
    for (auto& ch: t) {
      table[ch - 'a']--;
      if (table[ch - 'a'] < 0) {
        return false;
      }
    }
    return true;
  }
};

int main(){
  // 输入: s = "anagram", t = "nagaram"
  // 输出: true
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