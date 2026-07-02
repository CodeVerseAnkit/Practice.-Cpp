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

// preorder traversal
void preorder(node *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}
// inorder traversal
void inorder(node *root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}
// post order Traversal
void postorder(node *root)
{
    if (root == NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    cout << root->val << " ";
}
// level order Traversal
void levelorder(node *root)
{
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        node *curr = q.front();
        q.pop();
        cout << curr->val << " ";
        if (curr->left != NULL)
            q.push(curr->left);
        if (curr->right != NULL)
            q.push(curr->right);
    }
}
// level order Traversal
void levelorder2(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *curr = q.front();
        q.pop();
        if (curr == NULL)
        {
            if (!q.empty())
            {
                cout << endl;
                q.push(NULL);
                continue;
            }
            else
            {
                break;
            }
        }
        cout << curr->val << " ";
        if (curr->left != NULL)
            q.push(curr->left);
        if (curr->right != NULL)
            q.push(curr->right);
    }
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

    cout
        << "\n Preorder Traversal: ";
    preorder(root);
    cout
        << "\n Inorder Traversal: ";
    inorder(root);
    cout
        << "\n Post order Traversal: ";
    postorder(root);
    cout
        << "\n Level order Traversal: ";
    levelorder(root);
    cout
        << "\n Level order Traversal 2: \n";
    levelorder2(root);

    return 0;
}