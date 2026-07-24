#include <iostream>
#include <vector>
#include <queue>
using namespace std;
// Binary Tree
// node class
class node
{
  public:
    int val;
    node *left;
    node *right;
    node(int data)
    {
        val = data;
        left = right = NULL;
    }
};
// build binary tree
static int idx = -1;
node *buildTree(vector<int> preordered)
{
    idx++;
    // base condition
    if (preordered[idx] == -1)
        return NULL;
    node *root = new node(preordered[idx]); // new node
    root->left = buildTree(preordered);     // left
    root->right = buildTree(preordered);    // right
    return root;
}

// find kth level
void klevel(node *root, int k)
{
    if (!root)
        return;
    if (k == 1)
    {
        cout << root->val << " ";
        return;
    }
    klevel(root->left, k - 1);
    klevel(root->right, k - 1);
}

// main function
int main()
{
    vector<int> tree = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    int k = 2;
    node *root = buildTree(tree);
    klevel(root, k);

    return 0;
}