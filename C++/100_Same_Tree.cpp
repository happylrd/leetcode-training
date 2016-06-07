#include <iostream>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
	int val;
    TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {
public:
	bool isSameTree(TreeNode* p, TreeNode* q) {
		if (p == NULL && q == NULL)
			return true;
		else if (p == NULL || q == NULL)
			return false;
		else{
			if (p->val == q->val){
				if (isSameTree(p->left, q->left))
					return isSameTree(p->right, q->right);
			}
			return false;
		}
	}
};

int main(){
	Solution s;
	cout << s.isSameTree(&TreeNode(1), &TreeNode(2));
	return 0;
}