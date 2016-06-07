#include <stdio.h>

#define bool int
#define true 1
#define false 0

// Definition for a binary tree node.
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
};

bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
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

int main(){
	struct TreeNode p = { 1, NULL, NULL };
	struct TreeNode q = { 2, NULL, NULL };
	printf("%d", isSameTree(&p, &q));
	// getchar();
	return 0;
}