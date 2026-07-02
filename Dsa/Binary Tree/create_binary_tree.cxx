#include <iostream>
#include <vector>
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

// preorder traversal
void preorder(node *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}
// main function
int main()
{
    // preorder tree
    vector<int> preordered = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    node *root = buildTree(preordered);
    cout << "Root Value: " << root->val << endl;
    cout << "Root Left: " << root->left->val << endl;
    cout << "Root Right: " << root->right->val << endl;
    cout << endl
         << "Binary Tree :";
    preorder(root);

    return 0;
}