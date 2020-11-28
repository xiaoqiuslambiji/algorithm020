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
     * sort函数的模板有三个参数：
       void sort (RandomAccessIterator first, RandomAccessIterator last, Compare comp);
      （1）第一个参数first：是要排序的数组的起始地址。
      （2）第二个参数last：是结束的地址（最后一个数据的后一个数据的地址）
      （3）第三个参数comp是排序的方法：可以是从升序也可是降序。如果第三个参数不写，则默认的排序方法是从小到大排序。
      sort() 函数是基于快速排序实现的，
     */
    return s == t;
    // 排序之后进行字符串比较,如果两个字符串的每一个字符相等会返回 true
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