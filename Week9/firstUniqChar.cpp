//
// Created by q on 2021/1/16.
//
#include <unordered_map>
#include <string>
#include <iostream>

using namespace std;

class Solution {
 public:
  int firstUniqChar(std::string s) {
    std::unordered_map<int, int> frequency;
    for (char ch: s) {
      ++frequency[ch];
    }
    for (int i = 0; i < s.size(); ++i) {
      if (frequency[s[i]] == 1) {
        return i;
      }
    }
    return -1;
  }
};

std::string s = "xiaoqiuslambiji";
int main(){
  Solution solution;
  cout << solution.firstUniqChar(s) << endl;
  return 0;
}