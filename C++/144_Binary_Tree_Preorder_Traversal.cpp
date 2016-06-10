#include <iostream>
#include <vector>
#include <stack>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x, TreeNode *l = NULL, TreeNode *r = NULL)
		: val(x), left(l), right(r) {}
};

class Solution {
public:
	vector<int> preorderTraversal(TreeNode* root) {
		vector<int> ans;
		TreeNode* top = root;
		stack<TreeNode*> stack;
		while (top != NULL || (!stack.empty())){
			if (top == NULL){
				top = stack.top();
				stack.pop();
			}
			ans.push_back(top->val);
			if (top->right != NULL){
				stack.push(top->right);
			}
			top = top->left;
		}
		return ans;
	}
};

int main(){
	Solution s;
	vector<int> temp = s.preorderTraversal(
		&TreeNode(1, NULL,
		&TreeNode(2,
		&TreeNode(3))));
	cout << "[";
	for (int i = 0; i < temp.size(); i++){
		cout << temp[i];
		if (i == temp.size() - 1)
			break;
		cout << ",";
	}
	cout << "]";
	return 0;
}