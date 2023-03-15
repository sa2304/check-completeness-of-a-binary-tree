#include <algorithm>
#include <cassert>
#include <queue>
#include <iostream>

#include "tree_node.h"

using namespace std;

bool isLeaf(TreeNode *node) {
  return !node->left && !node->right;
}

class Solution {
  bool proceedRemainingLeafs(queue<TreeNode *> &q) {
    while (!q.empty()) {
      if (!isLeaf(q.front())) return false;
      q.pop();
    }

    return true;
  }
 public:
  bool isCompleteTree(TreeNode *root) {
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty()) {
      const int N = q.size();
      for (int i = 0; i < N; ++i) {
        TreeNode *node = q.front();
        q.pop();
        if (!node->left) {
          return isLeaf(node) && proceedRemainingLeafs(q);
        }
        q.push(node->left);
        if (!node->right) {
          return proceedRemainingLeafs(q);
        } else {
          q.push(node->right);
        }
      }
    }

    return true;
  }
};

void Test() {
  Solution s;
  assert(s.isCompleteTree(stringToTreeNode("[1,2,3,4,5,6]")));
  assert(!s.isCompleteTree(stringToTreeNode("[1,2,3,4,5,null,7]")));
  assert(s.isCompleteTree(stringToTreeNode("[1,2,3,5,6]")));
}

int main() {
  Test();
  std::cout << "Ok!" << std::endl;
  return 0;
}
