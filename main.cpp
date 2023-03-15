#include <cassert>
#include <iostream>

#include "tree_node.h"

using namespace std;

class Solution {
 public:
  bool isCompleteTree(TreeNode *root) {
    //FIXME
    return true;
  }
};

void Test() {
  Solution s;
  assert(s.isCompleteTree(stringToTreeNode("[1,2,3,4,5,6]")));
  assert(!s.isCompleteTree(stringToTreeNode("[1,2,3,4,5,null,7]")));

}

int main() {
  Test();
  std::cout << "Ok!" << std::endl;
  return 0;
}
