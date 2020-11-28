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
      // A��ASCII����65,a��ASCII����97
      table[ch - 'a']++;
      // vector���±���ch - 'a'��ֵ, ��ʼֵ����
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