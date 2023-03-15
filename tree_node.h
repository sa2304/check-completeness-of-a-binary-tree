//
// Created by Engineer on 15.03.2023.
//

#ifndef CHECK_COMPLETENESS_OF_A_BINARY_TREE_CMAKE_BUILD_DEBUG_TREE_NODE_H_
#define CHECK_COMPLETENESS_OF_A_BINARY_TREE_CMAKE_BUILD_DEBUG_TREE_NODE_H_

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

std::string treeNodeToString(TreeNode* root);
void prettyPrintTree(TreeNode* node, std::string prefix = "", bool isLeft = true);
TreeNode* stringToTreeNode(std::string input);

#endif //CHECK_COMPLETENESS_OF_A_BINARY_TREE_CMAKE_BUILD_DEBUG_TREE_NODE_H_
