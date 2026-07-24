#include <iostream>
#include <vector>
#include <queue>
#include <map>

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
void LeftView(node *root)
{
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        int size = q.size();
        for (int i = 0; i < size; i++)
        {
            node *curr = q.front();

            q.pop();

            if (i == 0)
                cout << curr->val << " ";
            if (curr->left)
                q.push(curr->left);
            if (curr->right)
                q.push(curr->right);
        }
    }
}
int main()
{
    vector<int> vec = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    node *root = buildTree(vec);
    LeftView(root);

    return 0;
}