#include<iostream>
#include<vector>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
private:
    vector<vector<int>> ans;
    vector<int> tem;
    int cur_sum = 0;
    void dfs(TreeNode* root, int sum){
        if(!root) return;
        tem.push_back(root->val);
        // 当当前值等于sum值时，添加到结果．
        if(root->val == sum) {ans.push_back(tem);}
        dfs(root->left, sum-root->val);
        dfs(root->right, sum-root->val);
        tem.pop_back();
    }
public:
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        if(!root) return ans;
        dfs(root, sum);
        // 递归搜索所有结点开始的路径
        pathSum(root->left, sum);
        pathSum(root->right, sum);
        return ans;
    }
};